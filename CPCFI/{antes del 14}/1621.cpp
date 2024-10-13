#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, i;
    set <int> a; 
    cin >> n;
    for(int inc=0, i=0; i<n; i++){
        cin >> inc;
        a.insert(inc);
    }
    cout << a.size();
    
}

int main() {
    fastIo();
    solve();
}