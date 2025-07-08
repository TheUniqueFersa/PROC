/*
    https://codeforces.com/problemset/problem/1901/A
    theuniqueFersa: YI!!
    > 20 | 07/07/2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)
using namespace std;

void solve(){
    int n, x, mx_dif=0, f_dif;
    cin>>n>>x;
    vector<int> a(n);
    cin >> a[0];
    fori(i, 1, n){
        cin >> a[i];
        mx_dif=max(mx_dif, abs(a[i-1]-a[i]));
    }
    f_dif = a[0];
    int ans = max(max(mx_dif, f_dif), abs(a[n-1]-x)*2);
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}