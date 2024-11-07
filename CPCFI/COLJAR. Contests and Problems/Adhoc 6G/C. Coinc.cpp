//Coins
#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vii;
typedef vector<vpi> vvpi;

void solve() {
    ll n, k;
    cin >> n >> k;
    if(k == 1 || k == n || n % 2 == 0 || n % k == 0) {
        cout << "YES\n";
        return;
    }
    if(k%2 == 0) {
        cout << "NO" << '\n';
        return;
    }
    if((n-k) >= 2) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}