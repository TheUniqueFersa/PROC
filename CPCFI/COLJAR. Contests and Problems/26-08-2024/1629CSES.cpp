#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> m(n);
    for(int i = 0; i<n; i++){
        cin >> m[i].first;
        cin >> m[i].second;
    }
    sort(m.begin(), m.end());
    int i=0, j=1, movies=1;
    while(j<n){
        if(m[i].second == m[j].first){
            movies++;
            i++;
        } else {
            j++;
        }
    }
    cout << movies;
}

int main() {
    solve();
}