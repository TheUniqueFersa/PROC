/*
    https://codeforces.com/contest/1365/problem/D
    theuniqueFersa: YI!! - Graphs / Flood Fill
    >2h | 30/04/2025
*/
#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 50;
const int MAXM = 50;
// char grid[150][150];
vector<string> GRID;

int n,m;
// bool visited[MAXN][MAXM];
vector<vector<bool>> visited;

int direcciones = 4;
int dr_8[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc_8[] = {0, 1, 1, 1, 0, -1, -1, -1};

// abajo, derecha, arriba, izquierda
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
char cB = 'B', cG = 'G', c3 = '*', c4 = '.'; // non visited, visited, blocked

int ncG = 0; // reset to 0 each time we start a new component
bool posible = true;
int contBordeG = 0, contIntersec = 0;
void floodfill(int r, int c, char nonReplaceableChar, char loseChar){
    if(r < 0 || r >= n || c < 0 || c >= m) return;
    if(GRID[r][c] == loseChar) {posible = false; return;}
    if(nonReplaceableChar==cB && GRID[r][c] != nonReplaceableChar) GRID[r][c] = c3;
    if(visited[r][c]) return;
    visited[r][c] = true;
    // currentSize++;
    if(GRID[r][c] == cG) ncG++;
    if(GRID[r][c] == nonReplaceableChar || (nonReplaceableChar == c4 && (GRID[r][c]==cG)))
        for(int i = 0; i<direcciones; i++)
            floodfill(r+dr[i], c+dc[i], nonReplaceableChar, loseChar);
}

void solve(){
    
    cin>>n>>m;
    GRID.assign(n, "");
    visited.assign(n, vector<bool>(m, false));
    contBordeG = 0; contIntersec = 0; posible = true;
    for(int i = 0; i<n; i++){
        cin >> GRID[i];
    }

    if(GRID[n-1][m-1] == cB) {cout << "No" << endl; return;}
    // int CC=0; //Componentes del grafo
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(GRID[i][j] == cB){
                // currentSize = 0;
                // Detona el primer dfs, donde esta segurado que es una nueva componente
                // ++CC;
                floodfill(i, j, cB, cG);
                if(!posible){cout << "No" << endl; return;}
            }
        }
    }
    ncG = 0;
    // visited.assign(n, vector<bool>(m, false));
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            if(GRID[i][j] == cG){
                // floodfill(i,j, cG, cB);
                // if(!posible){cout << "No" << endl; return;}
                ncG++;
            }
        }
    }
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<m; j++)
    //         cout << GRID[i][j];
    //     cout << endl;
    // }
    int currentG = ncG;
    ncG = 0;
    visited.assign(n, vector<bool>(m, false));
    floodfill(n-1, m-1, c4, '?');
    // cout << currentG << " " << ncG << endl;
    if(currentG == ncG) cout << "Yes" << endl;
    else cout << "No" << endl;
    // cout << contBordeG << " " << contIntersec << endl;
    // if(contBordeG <= contIntersec && contIntersec>0 && contBordeG>0) cout << "No" << endl;
    // else cout << "Yes" << endl;
    // if(contBordeG <= contIntersec && (contIntersec != 0 && contBordeG != 0)) cout << "No" << endl;
    // else if(contBordeG <= contIntersec) cout << "Yes" << endl;



}
int main(){
    int  t;
    cin >> t;
    while(t--) solve();
    return 0;
}