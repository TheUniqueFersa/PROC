#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    string s;
    cin >> s;
    s = "."+s;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    vector<int> b(s.count('s'));
    

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}