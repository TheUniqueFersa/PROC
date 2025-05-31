/*
    https://codeforces.com/problemset/problem/1371/A
    theuniqueFersa: YI!! | Math
    ? | 30/05/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n<2) {cout << 1 << endl; return;}
    if(n==3) cout << 2 << endl;
    else{
        cout << (n+1)/2 << endl;
    }
}
int main (){
    int t; 
    cin >> t;
    while(t--)solve();
}