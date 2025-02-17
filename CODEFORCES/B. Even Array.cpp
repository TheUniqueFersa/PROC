/*
    1367/B
 - theuniqueFersa: YI!!
    00:27:15 | 16/02/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define fori(a,b,c) for(int a = b; a<c; a++)

void solve(){
    int n;
    cin >> n;
    int n_e, n_o, e=0, o=0;
    n_e = (n%2 == 0)? n/2: n/2 + 1;
    n_o = n/2;
    int incons=0;
    fori(i, 0, n){
        int inc;
        cin >> inc;
        if(inc % 2 == 0) e++;
        else o++;
        if(inc % 2 != i % 2 ) incons++;
    }
    if(n_e == e && n_o == o){
        cout << incons/2 << endl;
    } else {
        cout << -1 << endl;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}