/*
    1829/problem/A
 - theuniqueFersa: YI!!
    00:04:30 | 14/02/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;
#define fori(a,b,c) for(int a = b; a<c; a++)

void solve(){
    string s, s2 = "codeforces";
    cin >> s;
    short n = 0;
    fori(i, 0, 10){
        if(s[i] != s2[i]) n++;
    }
    cout << n << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}