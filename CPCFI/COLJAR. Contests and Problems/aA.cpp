#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> graph;


void solve() {
    int n, m;
    cin >> n >> m;
    graph.assign(n, vector<int>());
    int temp, temp2;
    for(int i = 0; i<m; i++){
        cin >> temp >> temp2;
        graph[temp].push_back(temp2);
        graph[temp2].push_back(temp);
    }
    set<int> s;
    bool flag = true;
    for(int i= 0; i<n; i++){
        s.insert(graph[i].size());
        if(s.size()>2){
            cout << "unknown topology";
            flag = false;
            break;
        }
        
    }
    if(flag){
        int a,b;
        
        if(s.size() == 1){
            if (s.count(2) == 1){
                cout << "ring topology";
            }
        } else {
            if (s.count(1) == 1){
                if (s.count(2) == 1){
                    cout << "bus topology";
                } else {
                    cout << "star topology";
                }
            } else {
                cout << "unknown topology";
            }
        }
    }
    
}

int main() {
    fastIo();
    solve();
}