/*
    https://codeforces.com/problemset/problem/1729/A
    O(n): YI!!
    14 | 02/01/2026
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int x, y;
    x = abs(a-1);
    y = abs(b-c) + abs(c - 1);
    if(x == y) cout << 3 << endl; 
    else if(x<y) cout << 1 << endl;
    else cout << 2 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}