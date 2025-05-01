#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Recursión BFS por niveles

vector<vector<int>> grafo;
vector<bool> visitado;
vector<int> profundidad;

void bfs_recursivo(vector<int> nivel_actual, int nivel) {
    if (nivel_actual.empty()) return;
    vector<int> siguiente_nivel;

    for (int nodo : nivel_actual) {
        if (visitado[nodo]) continue;
        visitado[nodo] = true;
        profundidad[nodo] = nivel;

        for (int vecino : grafo[nodo]) {
            if (!visitado[vecino]) {
                siguiente_nivel.push_back(vecino);
            }
        }
    }

    bfs_recursivo(siguiente_nivel, nivel + 1);
}

int main() {
    // Grafo de ejemplo con 6 nodos
    vector<vector<int>> grafo = {
        {1, 3},       // 0
        {0, 2},       // 1
        {1, 5},       // 2
        {0, 4},       // 3
        {3, 5},       // 4
        {2, 4}        // 5
    };

    int n = grafo.size();
    vector<bool> visitado(n, false);
    vector<int> profundidad(n, -1); // -1 indica que no ha sido alcanzado
    vector<int> nivel_inicial = {0}; // Nodo inicial = 0

    bfs_recursivo(nivel_inicial, 0);

    // Imprimir profundidad
    for (int i = 0; i < n; ++i) {
        cout << "Nodo " << i << ": profundidad = " << profundidad[i] << endl;
    }

    return 0;
}
