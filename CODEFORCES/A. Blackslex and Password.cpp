/*
    https://codeforces.com/problemset/problem/2179/A
    O(1): YI!!
    < 60 | 10-03-2026
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int k,x;
    cin >> k >> x;
    cout << k*x +1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}