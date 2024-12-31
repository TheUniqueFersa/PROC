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
    int n; 
    cin >> n;
    vi v(n); in(v);
    ii mini = {INF,0}, maxi = {0,0};
    fori(i, 0, n){
        if(v[i] > maxi.F){
            maxi.F = v[i];
            maxi.S = i;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(v[i] < mini.F){
            mini.F = v[i];
            mini.S = i;
        }
    }
    // if(maxi.S == 0 && mini.S == n-1) {
    //     cout << 0 << endl;
    //     return;
    // }
    // cout << mini.S << " " << maxi.S;
    int res = (maxi.S) + ((n - mini.S) - 1);
    if(mini.S < maxi.S) res--;
    cout << res;
}

int main() {
    fastIO();
//    setIO();
    solve();
    return 0;
}