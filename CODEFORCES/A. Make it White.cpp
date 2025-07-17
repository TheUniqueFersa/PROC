/*
    https://codeforces.com/problemset/problem/1927/A
    theuniqueFersa: YI!!
    < 00:09:00 | 16/07/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int n, l=-1, r=-1;
    string s;
    cin >> n >> s;
    for(int i = 0; i<n; i++){
        if(s[i] == 'B'){ l = i; break;}
    }
    for(int i = n-1; i>=0; i--){
        if(s[i] == 'B'){ r= i; break;}
    }
    cout << r-l+1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}