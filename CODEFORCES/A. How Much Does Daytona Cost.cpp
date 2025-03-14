/*
    https://codeforces.com/problemset/problem/1878/A
 - theuniqueFersa: YI!!
    ? | 13/3/2025
*/
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool b = false;
    for(auto& each : a){
        cin >> each;
        if(each == k) b = true;
    }
    if(b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}