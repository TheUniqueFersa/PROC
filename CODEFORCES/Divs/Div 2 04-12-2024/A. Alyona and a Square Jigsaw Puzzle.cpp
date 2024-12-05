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
vi a(100, 0);
// vi b(100, 0);
void solve() {
    // fori(i, 0, 5) {
    //     cout << a[i] << " ";
    // }
    int n, inc, sum=0, days=0; 
    cin >> n;
    fori(i, 0, n) {
        cin >> inc;
        sum+=inc;
        auto x = lower_bound(all(a), sum);
        int ind = x-a.begin();
        if(a[ind] == sum) {
            days++;
        }
    }
    cout << days << endl;

}

int main() {
    fastIO();
//    setIO();
    a[0] = 1;
    fori(i, 1, 100) {
        a[i] = 8*i;
    }
    fori(i, 1, 100) {
        a[i] = a[i]+a[i-1];
    }
    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
    return 0;
}