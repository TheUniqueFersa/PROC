/*
    1760/C
 - theuniqueFersa: YI!!
    RP3 - OUTSOLVED
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync:with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define fori(a,b,c) for(int a = b; a<c; a++)
#define in(v) for(auto& each : v){ cin >> each; }
#define endl '\n'
typedef vector<int> vi;
typedef long long ll;

void solve(){
    int n, maxi, maxi_m1;
    cin >>n;
    int a[n], b[n];
    fori(i, 0, n){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    maxi = a[n-1];
    maxi_m1 = a[n-2];
    fori(i, 0, n){
        if(b[i] == maxi) cout << b[i] - maxi_m1 << " ";
        else cout << b[i] - maxi << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--)solve();
    return 0;
}