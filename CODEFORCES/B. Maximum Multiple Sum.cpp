/*
    https://codeforces.com/problemset/problem/1985/B
 - theuniqueFersa: YI!!
    ? | 21/03/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n<=3) cout << min(n, 3) << endl;
    else cout << 2 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}