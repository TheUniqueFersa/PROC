/*
    2027/A
 - theuniqueFersa: YI!!
    RP2
*/
#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;
void solve(){
    int n;
    cin >> n;
    int max_w=0, max_h = 0;
    fori(i, 0, n){
        int inc1, inc2;
        cin>>inc1>>inc2;
        max_w = max(max_w, inc1);
        max_h = max(max_h, inc2);
    }
    cout << (max_w * 2) + (max_h * 2) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}