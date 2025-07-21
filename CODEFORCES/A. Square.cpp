/*
    https://codeforces.com/problemset/problem/1921/A
    theuniqueFersa: YI!!
    00:13:00 | 20/07/2025
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define S second
#define F first
#define all(v) v.begin(),v.end()

using namespace std;

void solve(){
    vector<pair<int, int>> v;

    for(int j =0; j<4; j++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(all(v));
    int p = v[0].S;
    int q = v[1].S;
    int dif = abs(p-q);
    cout << dif*dif << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}