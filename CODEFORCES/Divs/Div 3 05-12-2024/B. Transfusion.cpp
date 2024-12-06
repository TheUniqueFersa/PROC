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
#define endl '\n'
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;

void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
bool divisor(ll n, ll x){
    if(n%x == 0) return true;
    return false;
}

void solve() {
    ll n;
    cin >> n;
    ll inc, evens=0, odds=0, ne, no, prom=0;
    no = (n%2==0)? n/2 : n/2+1;
    ne = n/2;
    // cout << ne << " " << no << endl;    
    vi a(n);
    fori(i,0,n) cin >> a[i];
    fori(i,1,n+1){
        if(i%2 == 0){
            evens += a[i-1];
        } else {
            odds += a[i-1];
        }
        prom += a[i-1];
    }
    if(divisor(evens, ne) && divisor(odds, no) && divisor(prom, n)){
        prom /= n;
        if(evens/ne == prom && odds/no == prom){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}