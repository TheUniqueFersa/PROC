/*
    https://codeforces.com/problemset/problem/2065/A
    theuniqueFersa: YI!!
    00:08:00 | 16/07/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    string w;
    cin >> w;
    int n = (int)w.size();
    int m = n-2;
    string s = w.erase(m) + "i";
    cout << s << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}