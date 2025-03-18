/*
    https://codeforces.com/problemset/problem/1722/B
 - theuniqueFersa: YI!!
    ? | 16/03/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s, s2;
    cin >> s >> s2;
    for(auto& each:s) if(each == 'G') each = 'B';
    for(auto& each:s2) if(each == 'G') each = 'B';

    if(s==s2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}