/*
    https://codeforces.com/problemset/problem/1433/A
 - theuniqueFersa: YI!!
    00:28:35 | 17/02/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define fori(a,b,c) for(int a = b; a<c; a++)
#define PB push_back
#define sz(a) (int)(a.size())
typedef vector<string> vs;
vs a;
void gen(){
    fori(i, 1, 9+1){
        fori(j, 1, 4+1){
            string s(j, '0'+i);
            a.PB(s);
        }
    }
}
void solve(){
    string s;
    cin >> s;
    // cout << sz(a);
    // for(auto s : a) cout << s << ", ";
    int res = 0;
    fori(i, 0, sz(a)){
        res += sz(a[i]);
        if(a[i] == s) break;
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    gen();
    while(t--) solve();
}

