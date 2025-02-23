/*
    https://codeforces.com/problemset/problem/1619/A
 - theuniqueFersa: YI!!
    00:07:05 | 19/02/2025
*/
#include <iostream>
#include <string>
#define sz(a) (int)(a.size())
#define endl '\n'
using namespace std;
void solve(){
    string s;
    cin >> s;
    if(sz(s) % 2 == 1) cout << "NO" << endl;
    else {
        for(int i = 0, j = sz(s)/2; i<sz(s)/2; i++){
            if(s[i] != s[j+i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}