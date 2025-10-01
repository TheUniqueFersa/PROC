/*
    https://codeforces.com/problemset/problem/1311/A
    O(n) YI!!
    < 10 | 01-10-2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int a,b;
    cin >> a>>b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    int dif = b-a;
    if(dif>0){
        if(dif&1) cout << 1 << endl;
        else cout << 2 << endl;
    } else {
        if(dif&1) cout << 2 << endl;
        else cout << 1 << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}