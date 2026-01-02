/*
    https://codeforces.com/problemset/problem/1814/A
    O(n): YI!!
    ? | 01/01/2026
*/
#include <iostream>
#define endl '\n'
typedef long long ll;
using namespace std;
void solve(){
    ll n,k;
    cin >> n >> k;
    if(! (n & 1)){
        cout << "YES" << endl;
    } else {
        if((! (k & 1)) || k > n){
            cout << "NO" << endl;
            return;
        }
        if(k & 1 && k <= n){
            cout << "YES" << endl;
            return;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}