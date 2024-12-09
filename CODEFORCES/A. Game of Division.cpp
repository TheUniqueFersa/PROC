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
    int n, k;
    cin >> n >> k;
    vi a(n);
    fori(i,0,n) cin >> a[i];
    set<int> s;
    for(int i = 0; i < n; i++){
        bool flag = true;
        // if(s.find(a[i])!=s.end()){
        //     continue;
        // }
        for(int j = 0; j<n; j++){
            if(i!=j){
                // if(s.find(a[j])!=s.end()){
                //     flag = false;
                //     break;
                // }
                if(abs(a[i]-a[j]) % k == 0){
                    // s.insert(a[j]);
                    // s.insert(a[i]);
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
            cout << i+1 << endl;
            return;
        }
    }
    // for(auto x: s)
    //     cout << x << " ";

    cout << "NO" << endl;
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}