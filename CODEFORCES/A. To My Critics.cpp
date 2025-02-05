/*
    1850/A
 - theuniqueFersa: YI!!
    00:08:12 | 29/01/2025
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define vi vector<int>
#define all(v) v.begin(),v.end()
using namespace std;
#define endl '\n'
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    vi A = {a,b,c};
    sort(all(A));
    if(A[2] + A[1] >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}