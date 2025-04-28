#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define fori(a,b,c) for(int a = b; a<c; a++)
#define PB push_back
using namespace std;

#include <fstream>

vector<vector<int>> grafo;
vector<int> visitados;
vector<int> recorrido;

void dfs(int nodo) {
    recorrido.push_back(nodo);
    visitados[nodo] = 1;
    
    for (auto vecino : grafo[nodo]) {
        if (!visitados[vecino]) {
            dfs(vecino);
        }
    }
}

void solve(){
    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(all(cows));
    map<string, int> m;
    fori(i, 0, sz(cows)) m[cows[i]] = i;
    grafo.assign(sz(cows), vector<int>());
    visitados.assign(sz(cows), 0);

    ifstream read("lineup.in");
    int n;
    read >> n;
    while(n--){
        string cow1, cow2, garbage;
        read >> cow1;
        fori(i, 0, 4) read >> garbage;
        read >> cow2;

        grafo[m[cow1]].PB(m[cow2]);
        grafo[m[cow2]].PB(m[cow1]);
    }
    fori(i, 0, sz(cows)){
        if(!visitados[i] && sz(grafo[i]) <= 1) {
            if(sz(grafo[i])<1) recorrido.PB(i);
            else dfs(i);
        }
    }

    ofstream out("lineup.out");
    for(int each : recorrido) out << cows[each] << endl;


}
int main(){
    solve();
    return 0;
}