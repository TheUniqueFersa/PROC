/*
    https://codeforces.com/problemset/problem/233/A
    theuniqueFersa: YI!!
    < 00:15:00 | 24/07/2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n&1){
        cout << -1 << endl;
        return;
    } else {
        for(int i = 0; i<n; i+=2){
            cout << i+2 << " " << i+1 << " ";
        }
    }
}
int main(){
    solve();
}