/*
    https://codeforces.com/problemset/problem/1974/A
 - theuniqueFersa: YI!!
    RP4
*/
#include <bits/stdc++.h>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)

using namespace std;
typedef vector<int> vi;
#define in(v) for(auto& each : v) cin >> each;
#define all(v) v.begin(),v.end()
#define PB push_back
void solve(){
    int x,y, m, n, mod;
    cin >> x >> y;
    int p = (y + 1)/2;
    m = (y % 2 == 0)? 8*(p) : (8*(p-1)) + 4;
    n = 15*p;
    if(x <= n-m) cout << p << endl;
    else {
        mod = (x-(n-m))%15;
        if(!mod) mod = 15;
        p += (x-(n-m) + (15 - mod))/15;
        cout << p << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}