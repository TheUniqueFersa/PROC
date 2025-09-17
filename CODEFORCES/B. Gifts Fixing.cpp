/*
    https://codeforces.com/problemset/problem/1399/B
    ODENE
    IMPLEMENTATION, max y min
    < 40 | 17-09-2025
*/
#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;
#define MAX_N 50
#define MAX_ab 1e9
typedef long long ll;
void solve(){
    int n, ma=MAX_ab, mb=MAX_ab;
    cin >> n;
    int a[MAX_N];
    int b[MAX_N];
    fori(i, 0, n){
        cin >> a[i];
    }
    fori(i, 0, n){
        cin >> b[i];
    }
    fori(i, 0, n){
        ma = min(a[i], ma);
        mb = min(b[i], mb);
    }
    ll moves = 0;
    fori(i, 0, n){
        int da, db;
        da = abs(ma - a[i]);
        db= abs(mb - b[i]);
        moves+=max(da, db);
    }
    cout << moves << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
