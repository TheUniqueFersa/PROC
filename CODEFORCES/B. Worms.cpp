/*
    https://codeforces.com/contest/474/problem/B
    O(m*logn): YI!!
    ? | ?
*/
#include <iostream>
#include <algorithm>
#include <vector>

#define endl '\n'
#define sz(v) (int)v.size()
#define fori(a,b,c) for(int a = b; a<c; a++)
#define all(v) v.begin(),v.end()
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    fori(i, 1, n){
        cin >> v[i];
        v[i] += v[i-1];
    }
    int m;
    cin >> m;
    fori(i, 0, m){
        int inc;
        cin >> inc;
        auto it = lower_bound(all(v), inc);
        int stack = distance(v.begin(), it);
        cout << stack + 1 << endl;
    }
}
int main(){
    solve();
    return 0;
}