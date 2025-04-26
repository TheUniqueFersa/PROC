/*
    https://codeforces.com/problemset/problem/1996/A
    theuniqueFersa: YI!!
    < 10 | 24/04/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    int res = n/4;
    n-= (n/4)*4;
    res += (n/2);
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}