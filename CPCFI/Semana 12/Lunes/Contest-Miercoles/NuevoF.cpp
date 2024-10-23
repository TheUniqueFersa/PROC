#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;
#define MOD % (1000000000 + 7)

ll binpow(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans=(ans  * a  ) MOD;
            //ans = ans MOD;
        }
        a = (   a * a )MOD ;
        //a = a MOD;
        b >>=1;
    }
    return ans ;
}


void solve() {
    int t;
    cin >> t;
    vpi p(t);
    for(int i = 0; i < t; i++){
        cin >> p[i].F;
    }
    for(int i = 0; i < t; i++){
        cin >> p[i].S;
    }
    for(int i = 0; i < t; i++){
        cout << binpow(2, p[i].S) << '\n';
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}