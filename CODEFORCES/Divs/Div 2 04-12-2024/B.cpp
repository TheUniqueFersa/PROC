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

void solve() {
    vii a(26, {0,0});
    int n; 
    string s;
    cin >> n >> s;
    if(n == 1) {
        cout << s << endl;
        return;
    }
    fori(i, 0, n) {
        if(a[s[i]-'a'].F==0) a[s[i]-'a'].S = i;
        a[s[i]-'a'].F++;
    }
    sort(rall(a));
    int validI = 0;
    fori(i, 0, 26) {
        if(a[i].F == 0) {
            validI = i;
            break;
        }
    }
    s[a[validI-1].S] = s[a[0].S];
    cout << s << endl;

}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
    return 0;
}