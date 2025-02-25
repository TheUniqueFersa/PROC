/*
    https://codeforces.com/problemset/problem/1929/A
 - theuniqueFersa: YI!!
    RP4
*/
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
typedef vector<int> vi;
#define in(v) for(auto& each : v) cin >> each;
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin >> n;
    vi a(n); in(a);
    sort(all(a));
    cout << a[n-1] - a[0] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}