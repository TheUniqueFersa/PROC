#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;

void solve() {
    //n: nodes
    int n = 6;   
    grafo.assign(n + 1, vector<int>());
    
    grafo[1] = {2, 4, 6};
    grafo[2] = {1, 3, 4};
    grafo[3] = {2, 5};
    grafo[4] = {1, 2, 5};
    grafo[5] = {3, 4};
    grafo[6] = {1};
}