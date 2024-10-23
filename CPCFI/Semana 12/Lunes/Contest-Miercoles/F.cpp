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
typedef vector<pi> vpi;
typedef vector<vector<pi>> vvpi;
#define MOD % (1000000000 + 7)

ll wBinCoef(ll N, ll kk){
    ll C[N][kk];
    for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
            C[n][k] = (C[n][k - 1] + C[n - 1][k - 1]) MOD;
    }
    
    return C[N][kk];
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
        cout << wBinCoef(p[i].F, p[i].S) << '\n';
    }
    
}

int main() {
    fastIo();
    solve();
}