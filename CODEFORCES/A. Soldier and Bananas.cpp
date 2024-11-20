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
    ll n;
    int k, w;
    cin >> k >> n >> w;
    ll x = k*(w*(w+1)/2);
    cout << max(0LL, x-n) << '\n';
    
}

int main() {
    fastIo();
    solve();
}