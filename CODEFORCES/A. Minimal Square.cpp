/*
    https://codeforces.com/problemset/problem/1360/A
 - theuniqueFersa: YI!!
    00:13:13 | 01/03/2025
*/
#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)
using namespace std;

void solve(){
    int a,b;
    cin >> a>>b;
    int res = max(min(a,b)*2,max(a,b));
    cout << res*res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}