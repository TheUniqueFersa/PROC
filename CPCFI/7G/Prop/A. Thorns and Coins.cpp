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
    int n, ans=0;
    cin >> n;
    vector<char> a(n+2);
    a[n+1] = '.';
    a[n] = '.';
    fori(i, 0, n) cin >> a[i];
    int i = 2;
    while(i<n+2){
        if(a[i-2] == '@'){
            ans++;
        }
        if((a[i-1] == '*' && a[i] == '*')){
            break;
        }else if(a[i-1] == '*' && a[i] != '*'){
            i+=2;
        }else{
            i++;
        }
    }
    cout << ans << endl;
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}