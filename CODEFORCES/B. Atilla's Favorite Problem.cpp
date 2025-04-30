/*
    https://codeforces.com/problemset/problem/1760/B
    theuniqueFersa: YI!!
    <6 | 29/04/2025
*/
#include<iostream>

#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    int mx = 0;
    string s;
    cin  >> s;
    for(int i = 0; i<n; i++){
        mx = max(mx, s[i]-'a');
    }
    cout << ++mx << endl;
}
int main(){
    int t ;
    cin >> t;
    while(t--) solve();
}