/*
    https://codeforces.com/problemset/problem/1360/B
 - theuniqueFersa: YI!!
    00:14:27 | 22/03/2025
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
#define fori(a,b,c) for(int a= b; a<c; a++)

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& each : a) cin >> each;
    sort(a.begin(), a.end());
    int mn = 1000;
    fori(i, 0, n-1){
        if(abs(a[i] - a[i+1]) < mn) mn = abs(a[i] - a[i+1]);
    }
    cout << mn << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}