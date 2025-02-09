/*
    1367/A
 - theuniqueFersa: YI!!
    00:14:24 | 31/01/2025
*/
#include <iostream>
using namespace std;
#define sz(v) int(v.size())
#define endl '\n'
#define fori2(a, b, n) for(int a=b; a<n; a+=2)
void solve(){
    string s;
    cin >> s;
    if(sz(s) > 2){
        fori2(i, 0, sz(s)){
            cout << s[i];
        }
        if(sz(s) % 2 == 0) cout << s[sz(s)-1];
    } else {
        cout << s;
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}