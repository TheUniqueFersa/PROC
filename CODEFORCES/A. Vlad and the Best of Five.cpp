/*
    https://codeforces.com/problemset/problem/1926/A
 - theuniqueFersa: YI!!
    ? | 03/03/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){
    string s;
    cin >> s;
    int a = 0,b = 0;
    for(auto each : s){
        if(each == 'A') a++;
        else b++;
    }
    if(a>=b) cout << "A" << endl;
    else cout << "B" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}