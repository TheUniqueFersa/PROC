#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define F first
#define S second
#define PB push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;

void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
//Empieza DFS
vvi graph;
vi visited;
vi traversal;


//es igual a:
/*
vector<vector<int>> grafo;
vector<int> visitados;
vector<int> recorrido;
*/

void iterative_dfs(int node){
    stack<int> s;
    s.push(node);
    visited[node] = 1;
    while(!s.empty()){
        int current = s.top(); s.pop();
        traversal.PB(current);
        
        for(auto neighbor : graph[current]){
            if(!visited[neighbor]){
                s.push(neighbor);
                visited[neighbor] = 1;
            }
        }
    }
}



void solve() {
    int nodes;
    cin >> nodes;
    graph.assign(nodes + 1, vi());
    visited.assign(nodes + 1, 0);

    // graph[1] = {2};
    // graph[2] = {1, 4, 5, 3};
    // graph[3] = {2, 4, 6};
    // graph[4] = {3, 2};
    // graph[5] = {2, 6};
    // graph[6] = {3, 5};
    
    for (int i = 0; i < nodes; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // Añadir v a la lista de adyacencia de u
        graph[v].push_back(u); // Añadir u a la lista de adyacencia de v (porque es no dirigido)
    }

    iterative_dfs(1);
    cout << "DFS: ";
    for(auto node : traversal) cout << node << ' ' << endl;

}


int main() {
    fastIO();
//    setIO();
    // int t;
    // cin >> t;
    // while( t-- ) 
    solve();
    return 0;
}