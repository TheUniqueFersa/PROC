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
    ll n;
    cin >> n;
    int m=0;
    string s = to_string(n);
    fori(i, 0, s.size()) {
        if(s[i] == '4'||s[i] == '7') m++;
    }
    s = to_string(m);
    fori(i, 0, sz(s)){
        if(s[i] != '4' && s[i] != '7'){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    fastIO();
//    setIO();
    solve();
    return 0;
}