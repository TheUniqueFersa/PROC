#include <iostream>
#include <vector>
#define fori(a,b,c) for(int a = b; a<c ; a++)
#define endl '\n'

using namespace std;

const int MAXN = 1000;
const int MAXM = 1000;
// char grid[150][150];
vector<vector<char>> GRID;

int n,m;
bool visited[MAXN][MAXM];

int direcciones = 4;
int dr_8[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc_8[] = {0, 1, 1, 1, 0, -1, -1, -1};

// abajo, derecha, arriba, izquierda
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};


int currentSize = 0; // reset to 0 each time we start a new component

void floodfill(int r, int c, int color){
    if(r < 0 || r >= n || c < 0 || c >= m) return;
    if(GRID[r][c] != color) return;
    if(visited[r][c]) return;
    visited[r][c] = true;
    currentSize++;
    for(int i = 0; i<direcciones; i++)
        floodfill(r+dr[i], c+dc[i], color);
}

void solve(){
    char c1 = '.', c2; // non visited, visited
    cin>>n>>m;
    GRID.assign(n, vector<char>(m));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> GRID[i][j];
        }
    }


    int CC=0; //Componentes del grafo
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(!visited[i][j] && GRID[i][j] == c1){
                // Detona el primer dfs, donde esta segurado que es una nueva componente
                ++CC;
                floodfill(i, j, c1);
            }
        }
    }
    cout << CC << endl;
}

int main(){
    solve();
    return 0;
}