#include <iostream>
#include <vector>
#include <queue>
#define F first
#define S second
#define PB push_back
using namespace std;

int direcciones = 4;
int dr_8[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc_8[] = {0, 1, 1, 1, 0, -1, -1, -1};

// abajo, derecha, arriba, izquierda
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};

vector<vector<char>> grid;
vector<vector<bool>> visited;
vector<vector<int>> depthVector;
vector<vector<string>> traversal;
int r,c;

typedef pair<int, int> Nodo;

void flood_fill(vector<Nodo> nivel_actual, int color, int depth) {
    if (nivel_actual.empty()) return;
    vector<Nodo> siguiente_nivel;

    for (Nodo v : nivel_actual) {
        int x = v.F, y = v.S;
        if (visited[x][y]) continue;
        visited[x][y] = true;
        depthVector[x][y] = depth;

        for(int d = 0; d<direcciones; d++){
            int nx = x+dr[d];
            int ny = y+dc[d];
            if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny] != color && !visited[nx][ny]){
                siguiente_nivel.PB({nx, ny});
            }
        }
    }
    flood_fill(siguiente_nivel, color, depth + 1);
}

void imprimirGrid(int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << grid[i][j];
        }cout << endl;
    }
}
void printVisited(int n, int m){
    //print visited
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
    for(vector<string> each : traversal){
        for(string each2 : each){
            // if(each2 == -1) cout << '#' ;
            cout << "|"<< each2 << "|";
        }
        cout << endl;
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    r=n; c=m;
    grid.assign(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));
    depthVector.assign(n, vector<int>(m, -1)); // -1 indica que no ha sido alcanzado
    int colorPared='#';

        //input routine
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> grid[i][j];


    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] != colorPared){
                vector<Nodo> nivel_inicial = {{i,j}}; // Nodo inicial = 0
                flood_fill(nivel_inicial, colorPared, 0);
            }
        }
    }
    printDepth(n,m);

    
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}   