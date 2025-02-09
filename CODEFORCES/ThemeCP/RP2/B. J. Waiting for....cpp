/*
    2038/J
 - theuniqueFersa: YI!!
    RP2
*/
#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int p = 1, inc;
    while(n--){
        char c;
        cin >> c;
        cin >> inc;
        if(c == 'P'){
            p+=inc;
        } else {
            if(inc < p) {
                cout << "NO" << endl;
                p-= inc;
            } else {
                cout << "YES" << endl;
                p-=min(p, inc)-1;
            }
        }
    }
}
int main(){
    solve();
    return 0;
}