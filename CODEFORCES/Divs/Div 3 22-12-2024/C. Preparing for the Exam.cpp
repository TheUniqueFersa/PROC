#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define F first
#define S second
#define PB push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define in(v) for(auto &x : v) cin >> x;
#define endl '\n'
#define out(v) for(auto x : v) cout << x << " "; cout<<endl;
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;
/*
void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
*/
void solve() {
    ll n, m, k;
    cin>>n>>m>>k;
    string s(m, '1'), s0(m, '0');
    
    ll sg = n*(n+1)/2;
    vector<ll> a(m); in(a);
    ll su = 0, inc;
    fori(i, 0, k){
        cin >> inc;
        su += inc;
    }
    if (k<n-1){
        cout << s0 << endl;
        return;
    }
    if(k>=n){
        cout << s << endl;
        return;
    }
    sg -= su;
    //sg -> elem not in
    fori(i, 0, m){
        if(a[i] != sg) s[i] = '0';
    }
    cout << s << endl;
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}