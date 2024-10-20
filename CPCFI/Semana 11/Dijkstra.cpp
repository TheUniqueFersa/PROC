#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;
const int INF = INT_MAX;


priority_queue<pair<int,int>> q;
vi distancia;
vi processed;
vvpi adj;
void printVector(vi & v){
    int i = 1;
    for(auto e : v){
        cout << "Nodo " << i << ": " << e << '\n';
        i++;
    }
}
/**
 * @param x: Parametro loco osea el nodo donde empezamos
 * @param n: Tamaño del nodo
 */
void dijkstra(int x, int n){
    for (int i = 1; i <= n; i++) {
        distancia[i] = INF;
    }
    distancia[x] = 0;
    q.push({0,x});
    while (!q.empty()) {
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u : adj[a]) {
            int b = u.first, w = u.second;
            if (distancia[a]+w < distancia[b]) {
                distancia[b] = distancia[a]+w;
                q.push({-distancia[b],b});
            }
        }
    }
}

void solve() {
    int n = 7;
    adj.assign(n+1, vector<pi>());
    distancia.assign(n+1, INF);
    //La inicializacion de distancia se hace en el algoritmo de dijkstra :)
    processed.assign(n+1, 0);
    
    adj[1] = {{2,3}, {3,2}, {4,4}};
    adj[3] = {{4,1}, {5,4}, {6,3}};
    adj[4] = {{5,2}};
    adj[5] = {{6,2}, {7,5}};
    adj[6] = {{7,3}};

    dijkstra(1, n);
    printVector(distancia);
}

int main() {
    fastIo();
    solve();
}