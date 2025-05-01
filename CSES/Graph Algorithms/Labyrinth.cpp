/*
#include <iostream>
#include <vector>
#include <queue>
#define F first
#define S second
#define PB push_back
#define sz(v) (int)v.size()
using namespace std;

int direcciones = 4;
int dr_8[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc_8[] = {0, 1, 1, 1, 0, -1, -1, -1};

// abajo, derecha, arriba, izquierda
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
char dd[] = {'D', 'R', 'U', 'L'};

vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<vector<int>> depthVector;
vector<vector<string>> traversal;
int r,c;

typedef pair<int, int> Nodo;
Nodo coordB = {-1,-1};
void flood_fill(vector<Nodo> nivel_actual, int color, int depth) {
    if (nivel_actual.empty()) return;
    // vector<Nodo> siguiente_nivel;
    vector<Nodo> siguiente_nivel;

    for (Nodo v : nivel_actual) {
        int x = v.F, y = v.S;
        if (visited[x][y]) continue;
        visited[x][y] = true;
        
        depthVector[x][y] = depth;
        // traversal[x][y].PB(elem.S);

        if(grid[x][y] == 'B') coordB = {x,y};

        for(int d = 0; d<direcciones; d++){
            int nx = x+dr[d];
            int ny = y+dc[d];
            if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny] != color && !visited[nx][ny]){
                traversal[nx][ny] = traversal[x][y]+dd[d];
                siguiente_nivel.PB({nx, ny});
            }
        }
    }
    flood_fill(siguiente_nivel, color, depth + 1);
}

void solve(){
    int n, m;
    cin >> n >> m;
    r=n; c=m;
    grid.assign(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));
    depthVector.assign(n, vector<int>(m, -1)); // -1 indica que no ha sido alcanzado
    traversal.assign(n, vector<string>(m, ""));
    int colorPared='#';
    Nodo coordA;


    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A') coordA = {i, j};
        }
    // vector<char> traversal;

    vector<Nodo> nivel_inicial = {coordA}; // Nodo inicial = 0
    flood_fill(nivel_inicial, colorPared, 0);

    // printDepth(n, m);
    // printTraversal(n, m);

    // cout << traversal[3][1] << endl;

    if(coordB == make_pair(-1, -1)) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << depthVector[coordB.F][coordB.S] << endl;
        cout << traversal[coordB.F][coordB.S] << endl;
    }
    // cout << ":)" << endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}   

*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define F first
#define S second
#define PB push_back

typedef pair<int, int> Nodo;
const int N=1000;
const int M=1000;
char grid[N][M];
bool visited[N][M];

int direcciones = 4;
int dr_8[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc_8[] = {0, 1, 1, 1, 0, -1, -1, -1};

int r,c;

// abajo, derecha, arriba, izquierda
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
char dd[] = {'D', 'R', 'U', 'L'};


vector<vector<int>> depthVector;
// vector<vector<string>> traversal;
// char traversal[1000][1000];
vector<vector<char>> traversal;
Nodo coordB = {-1, -1};

//coordenadas x, y, Color a pintar(pared)
void flood_fill(int x, int y, char color){
    if(visited[x][y]) return;
    // grid[x][y] = color; // color it as visited
    queue<pair<int, int>> q;
    
    visited[x][y] = true;
    depthVector[x][y] = 0;

    q.push({x,y});

    while(!q.empty()){
        pair<int, int> current = q.front();
        q.pop();
        int x1 = current.first;
        int y1 = current.second;
        if(grid[x1][y1] == 'B') coordB = {x1,y1};
        for(int d = 0; d<direcciones; d++){
            int nx = x1+dr[d];
            int ny = y1+dc[d];
            if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny] != color && !visited[nx][ny]){
                visited[nx][ny] = true;
                // grid[nx][ny] = color; // color it as visited
                // traversal[nx][ny] = traversal[x1][y1]+dd[d];
                traversal[nx][ny] = dd[d];
                depthVector[nx][ny] = depthVector[x1][y1] + 1;
                q.push({nx,ny});
            }
        }
        
    }
}

void imprimirGrid(int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << grid[i][j];
        }cout << endl;
    }
}
void printVisited(int n, int m){
    //Imprimir visitados
    for(int i = 0; i<n; i++){
        for(int  j =0; j<m; j++){
            if(visited[i][j]) cout << 1 ;
            else cout << 0;
        }
        cout << endl;
    }
}
void printDepth(int n, int m){
    //Imprimir depth
    for(vector<int> each : depthVector){
        for(int each2 : each){
            // if(each2 == -1) cout << '#' ;
            string s;
            if(each2 < 10 && each2 >= 0) s = "0"+to_string(each2);
            else s = to_string(each2);
            
            cout << "|"<< s << "|";
        }
        cout << endl;
    }
}
void printTraversal(int n, int m){
    for(vector<char> each : traversal){
        for(char each2 : each){
            // if(each2 == -1) cout << '#' ;
            cout << "|"<< each2 << "|";
        }
        cout << endl;
    }
}

void solve(){
    int n, m;
    cin >> n >> m;

    depthVector.assign(n, vector<int>(m, -1));
    traversal.assign(n, vector<char>(m, '#'));
    int colorPared='#';
    r=n; c=m;
    Nodo coordA;

    //input routine
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A') coordA = {i, j};
        }
    // vector<char> traversal;

    vector<Nodo> nivel_inicial = {coordA}; // Nodo inicial = 0
    flood_fill(coordA.F, coordA.S, colorPared);

    // printDepth(n, m);
    // printTraversal(n, m);

    // cout << traversal[3][1] << endl;

    if(coordB == make_pair(-1, -1)) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << depthVector[coordB.F][coordB.S] << endl;
        Nodo P = {coordB.F, coordB.S};
        char ans[1000000];
        // ans[depthVector[coordB.F][coordB.S]+1] = '\0';
        for(int i = depthVector[coordB.F][coordB.S]; i>0; i--){
            for(int d = 0; d<direcciones; d++){
                // if(traversal[lastNode.F][lastNode.S] == dd[d]) {
                //     ans[i] = traversal[lastNode.F][lastNode.S];
                //     lastNode = {lastNode.F + dr[d], lastNode.S + dc[d]};
                // }
            }
            ans[i] = traversal[P.F][P.S];
                if(ans[i] == 'D')       P = {P.F-1, P.S};
                else if(ans[i] == 'U')  P = {P.F+1, P.S};
                else if(ans[i] == 'R')  P = {P.F, P.S-1};
                else if(ans[i] == 'L')  P = {P.F, P.S+1};
        }
        for(int i = 0; i<=depthVector[coordB.F][coordB.S]; i++)
            cout << ans[i];
        // printf("%s", ans);
        // cout << endl;
        // cout << traversal[coordB.F][coordB.S] << endl;
    }
    // cout << grid[coordB.F][coordB.S] << endl;
}
int main(){
    solve();
    return 0;
}