/*
 - theuniqueFersa: YI!!
    timeToSolve | date
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
    int k, c_1=0, c_x=0, n_1=-1, n_x=-1;
    cin >> k;
    // vi a(k);
    int r = k-2;
    set<int> s1, s2;
    fori(i, 0, k){
        int inc;
        cin >> inc;
        if(r % inc == 0){
            if(s1.count(inc)){
                s2.insert(inc);
            } else {
                s1.insert(inc);
            }
        }
    }
    
    
    for(int each : s1){        
        for(int eachh : s1){
            if(each * eachh == r){
                if(each == eachh && s2.count(eachh)){
                    cout << each << " " << eachh<<endl;
                    return;
                }
                cout << each << " " << eachh<<endl;
                return;
            }
            
        }
    }
    // set<int> nr1;
    // fori(i, 0, k){
        // if(!nr1.count(a[i])){
            // set<int> s;
            // fori(j, i+1, k){                
                // if(i!=j){
                    // if(!s.count(a[j]) && a[i] * a[j] == r){
                    // if(a[i] * a[j] == r){
                        // cout << a[i] << " " << a[j] << endl;
                        // return;
                    // } else {
                        // s.insert(a[j]);
                    // }
                // }
            // }
            // nr1.insert(a[i]);
        // }
        
    // }
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    while( t-- ) solve();
    return 0;
}