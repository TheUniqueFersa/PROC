/*
    1873/A
 - theuniqueFersa: YI!!
    00:08:20 | 15/02/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
    string s;
    cin >> s;
    if(s[0] == 'a'){
        cout << "YES";
    } else if(s[0] == 'b'){
        if((s[1] == 'a')) cout << "YES";
        else cout << "NO";
    } else {
        if(s[2] == 'a') cout << "YES";
        else cout << "NO";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}