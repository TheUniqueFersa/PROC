#include <iostream>
#include <vector>
using namespace std;

// -------------------------- [ CP4 Implementation ] --------------------------
char line[150], grid[150][150];
int R, C;
int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

int floodfill(int r, int c, char c1, char c2){
    if((r<0) || (r>=R)) return 0;
    if((c<0) || (c>=C)) return 0;
    if(grid[r][c] != c1) return 0;
    int ans = 1;
    grid[r][c] = c2;
    for(int d = 0; d<8; ++d)
        ans += floodfill(r+dr[d], c+dc[d], c1, c2);
    return ans;
}
/*
 Esta implementación de FloodFill identifica solon 2 tipos de caracter en el grid (visitados y no visitados)
 Notese que no se requiere un vector de bools para saber que ya fue visitada la coordenada i,j

 - útil para contar el número de nodos que tiene una componente
 - para las 8 direcciones
 
*/



// -------------------------- [ USACO BOOK Implementation ] --------------------------

int grid[MAXN][MAXM]; // the grid itself
int n, m; // grid dimensions, rows and columns
bool visited[MAXN][MAXM]; // keeps track of which nodes have been visited
int currentSize = 0; // reset to 0 each time we start a new component
void floodfill(int r, int c, int color){
    if(r < 0 || r >= n || c < 0 || c >= m) return; // if outside grid
    if(grid[r][c] != color) return; // wrong color
    if(visited[r][c]) return; // already visited this squar 
    visited[r][c] = true; // mark current square as visited
    currentSize++; // increment the size for each square we visit
    // recursively call floodfill for neighboring squares
    floodfill(r, c+1, color);
    floodfill(r, c-1, color);
    floodfill(r-1, c, color);
    floodfill(r+1, c, color);
}
int main(){
    /**
    * input code and other problem-specific stuff here
    */
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j]){
                currentSize = 0;
                floodfill(i, j, grid[i][j]);
                // start a floodfill if the square hasn't
                // already been visited, and then
                // store or otherwise use the component size for whatever
                // it's needed for
            }
        }
    }
    return 0;
}



// ------------------------------ [ Combination of both ] ----------------------------------------
/*
Combina una manera legible de buscar los vecinos
Cuenta las componentes, así como el número de nodos en cada componente
*/

const int MAXN = 10000;
const int MAXM = 10000;
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
    char c1 = '.'; // non visited, visited
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
                currentSize = 0;
                // Detona el primer dfs, donde esta segurado que es una nueva componente
                ++CC;
                floodfill(i, j, c1);
            }
        }
    }
    // cout << CC << endl;
}