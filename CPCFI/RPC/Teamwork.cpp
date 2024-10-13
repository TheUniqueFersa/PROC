//K.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
#define endl '\n'
#define fi first
#define se second
#define PB push_back
#define ll long long
#define F first
#define S second
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve() {
    int n, p, t;
    cin >> n >> p >> t;
    vector<vector<pair<int, int>>> a(n, vector<pair<int, int>>());
    int prob=0, aux;
    vector<int> problem(p, 1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cin >> aux;
            if(aux != 0){
                a[i].PB({aux, j});
            }
        }
        sort(a[i].begin(), a[i].end());
    }
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        for(auto each : a[i]){
            if(t- each.first >= 0 && problem[each.second] == 1){
                prob++;
                t -= each.first;
                problem[each.second] = 0;
                if(t == 0) return prob;
                break;
            }
        }
    }
    return prob;
    
}

int main() {
    fastIo();
    
    // int t = 1;
    // cin >> t;
    // while (t--) solve();
    cout << solve();
}