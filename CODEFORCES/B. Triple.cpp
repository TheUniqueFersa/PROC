/*
    https://codeforces.com/problemset/problem/1669/B
    - ADHOC
    theuniqueFersa: YI!!
    <12 | 19/5/2025
*/
#include <iostream>
#include <vector>
#include <map>
#define endl '\n'
#define F first
#define S second

using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for(int &each : v) cin >> each;
    for(int each : v){
        if(m.count(each) < 1) m[each] = 1;
        else m[each]++;
    }
    for(pair<int, int> each : m){
        if(each.S >= 3) {
            cout << each.F << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}