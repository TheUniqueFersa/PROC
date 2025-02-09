/*
    1950/A
 - theuniqueFersa: YI!!
    00:05:37 | 04/02/2025
*/
#include <iostream>
using namespace std;
#define endl '\n'
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c>b && b>a) cout << "STAIR" << endl;
    else if(c<b && a<b) cout << "PEAK" <<endl;
    else cout << "NONE" << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--) solve();
    return 0;
}