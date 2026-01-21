/*
    https://codeforces.com/problemset/problem/2044/C
    O(1)
    < 10 | 20-01-2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int res = 0;
    res += min(a,m);
    int r_a = (m-a<0)? 0 : m-a;
    res += min(b,m);
    int r_b = (m-b<0)? 0 : m-b;
    res += min(c, r_a+r_b);
    cout << res << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}