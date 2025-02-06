/*
    2035/A
 - theuniqueFersa: YI!!
    RP2
*/
#include <iostream>
using namespace std;
typedef long long ll;
#define endl '\n'
void solve(){
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    cout << (m-c) + (n-r)*(m-1) + (n-r)*(m) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}