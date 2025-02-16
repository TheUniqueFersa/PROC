/*
    1918/B
 - theuniqueFersa: YI!!
    D. RP3 - OUTSOLVED
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define endl '\n'
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
#define fori(a,b,c) for(int a=b; a<c; a++)
#define F first
#define S second 
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin >> n;
    vpii a(n, {0,0});
    fori(i, 0, n) cin>>a[i].F;
    fori(i, 0, n) cin>>a[i].S;
    sort(all(a));
    fori(i, 0, n) cout << a[i].F << " ";
    cout << endl;
    fori(i, 0, n) cout << a[i].S << " ";
    cout << endl;
}
int main(){
    fastIO();
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}