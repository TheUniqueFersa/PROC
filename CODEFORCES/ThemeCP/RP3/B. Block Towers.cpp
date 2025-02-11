/*
    1767/B
 - theuniqueFersa: YI!!
    RP3
*/
#include <bits/stdc++.h>
#define fastIO() ios_base::sync:with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define fori(a,b,c) for(int a = b; a<c; a++)
#define in(v) for(auto& each : v){ cin >> each; }
#define endl '\n'
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    // set<ll> s;
    vi a(n);
    ll ans;
    cin >> ans;
    fori(i, 0, n-1){
        ll inc; cin>>inc;
        // s.insert(inc);
        a.PB(inc);
    }    
    sort(all(a));
    for(auto each:a){
        if(each>ans){
            // ans += ((each-ans) % 2 == 0)? (each-ans)/2 : ((each-ans)/2) + 1 ;
            ans += (each-ans + 1 ) / 2; // A more elegant way
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--)solve();
    return 0;
}