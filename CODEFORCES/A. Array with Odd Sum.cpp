/*
    https://codeforces.com/problemset/problem/1296/A
    theuniqueFersa: YI!!
    < 1h | 23-08-2025
*/
#include <iostream>
#include <set>
#define endl '\n'
#define sz(v) (int)v.size()
using namespace std;

void solve(){
    int n;
    cin >> n;
    bool odd_e = 0, even_e = 0;
    for(int i = 0; i<n; i++){
        int inc;
        cin >> inc;
        if(inc&1) odd_e = true;
        else even_e = true;
    }
    if(even_e && odd_e) cout << "YES" << endl;
    else{
        if(even_e && !odd_e) cout << "NO" << endl;
        else if(odd_e && !even_e){
            if(n&1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}