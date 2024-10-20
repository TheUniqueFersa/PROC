#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

/* 
- Si no esta revisado:
    Agregar a PQ
    Revisar Aristas(calculando si el valor es menor reemplazar)
    Cuando se hayan revisado todas las aristas, marcar el nodo como vistado
Desencolar
*/
#define pii pair<int, int>
#define INFINITYY 100000
vector<vector<pii>> grafo;
vector<int> visitados;
//vector<int> recorrido;
vector<int> weight;
priority_queue<pii, vector<pair<int, pii>>, greater<pair<int, pii>>> pq;

void dijkstra(int n){
    if(!visitados[n]){
        for(auto : grafo[n]){
            
        }
    }
}

void solve() {
    //int n;
    //cin >> n;
    grafo.assign(7+1, vector<int>());
    visitados.assign(7+1, 0);
    weight.assign(7+1, INFINITYY);

    grafo[1] = {{2,3}, {3,2}, {4,4}};
    grafo[3] = {{4,1}, {5,4}, {6,3}};
    grafo[4] = {{5,2}};
    grafo[5] = {{6,2}, {7,5}};
    grafo[6] = {{7,3}};

    
    pq.push()
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}