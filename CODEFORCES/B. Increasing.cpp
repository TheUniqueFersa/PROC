/*
    https://codeforces.com/problemset/problem/1742/B
 - theuniqueFersa: YI!!
    wuawua | 08/03/2025
*/
#include <iostream>
#include <set>
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> s;
    bool b = true;
    for(int a = 0; a<n; a++){
        int t;
        cin >> t;
        if(s.count(t)>0) b = false; 
        s.insert(t);
    }
    if(b) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}