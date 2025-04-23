/*
    https://codeforces.com/problemset/problem/1374/A
    theuniqueFersa: YI!!
    t>30 | 22/04/2025
*/

#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    int p = n%x;
    if(p!=y){
        int nr = n-(p-y);
        if(nr>n) nr = nr-x;
        cout << nr << endl;
    } else cout << n << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}