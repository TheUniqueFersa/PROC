/*
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2661#google_vignette    
    O(1): YI!!
    60 | 09-03-2026
*/
#include <iostream>
#include <cmath>

#define endl '\n'
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll ans = (-1+sqrt(1+8*n))/2;
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}