/*
    https://codeforces.com/problemset/problem/1283/A
    theuniqueFersa: YI!!
    00:06:31 | 05/05/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;
void solve(){
    int h, m;
    cin>>h>>m;
    cout << 1440 - 60*h - m << endl;
}
 int main(){
    int t ; cin >> t;
    while(t--)solve();
    return 0;
 }
