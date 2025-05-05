/*
    https://codeforces.com/problemset/problem/1624/A
    theuniqueFersa: YI!!
    00:05:44 | 04/05/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int n, mn=1000000000+1, mx = 0; 
    cin >> n;
    while(n--){
        int inc;
        cin >> inc;
        mx = max(mx, inc);
        mn = min(mn, inc);
    }
    cout << mx-mn << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}