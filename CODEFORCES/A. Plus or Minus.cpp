/*
    1807/A
 - theuniqueFersa: YI!!
    00:03:05 | 08/02/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c) cout << '+' << endl;
    else cout << '-' << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}