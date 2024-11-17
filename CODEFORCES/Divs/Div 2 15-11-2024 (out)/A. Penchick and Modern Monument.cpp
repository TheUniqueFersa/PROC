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
    int n, xmax = 0, x = 1;
    cin >> n;
    if(n == 1) {
        cout << 0 << '\n';
        return;
    }
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i< n-1; i++){
        if(a[i] == a[i+1]){
            x++;
        } else {
            xmax = max(xmax, x);
            x = 1;
        }
    }
    xmax = max(xmax, x);
    cout << n - xmax << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}