#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    string s, nueva;
    cin >> n;
    cin >> s;
    int m;
    string c;
    for(int i=0; i<n; i++){

        c = s[s.size()];
        s.pop_back();
        m = nueva.size()/2;
        nueva.insert(m, c);
        
    }
    cout << nueva;
}

int main() {
    solve();
}