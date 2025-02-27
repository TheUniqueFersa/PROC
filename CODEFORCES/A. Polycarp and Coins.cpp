/*
    https://codeforces.com/problemset/problem/1551/A
 - theuniqueFersa: YI!!
    00:27:43 | 19/02/2025
*/
#include <iostream>
using namespace std;

#define endl '\n'

void solve(){
    int n;
    cin >> n;
    int c2 = n/3;
    int c1 = abs((2*c2) - n);
    int t_c2 = c2;
    for(int i = t_c2-1; i<=t_c2+1; i++){
        if(abs(n-(2*i) - i) < abs(c1-c2)) {
            c2 = i;
            c1 = n-(2*c2);
        }
    }
    cout << c1 << " " << c2 << endl;
}
int main(){
    int t ;
    cin >> t;
    while(t--) solve();
    return 0;
}