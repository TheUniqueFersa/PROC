/*
    490/A
 - theuniqueFersa: YI!!
    00:08:31 | 28/01/2025
*/
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
    vi p,m,pe;
    int n, np=0, nm=0, npe=0;
    cin >> n;
    fori(i, 1, n+1){
        int inc;
        cin >> inc;
        if(inc == 1){
            np++;
            p.PB(i);
        } else if(inc == 2){
            nm++;
            m.PB(i);
        } else {
            npe++;
            pe.PB(i);
        }
    }
    int minn = min(np, min(nm, npe));
    cout << minn << endl;
    fori(i, 0, minn){
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }

}

int main() {
    fastIO();
//    setIO();
    solve();
    return 0;
}