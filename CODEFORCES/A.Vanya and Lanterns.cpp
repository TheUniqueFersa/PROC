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
    int n, l;
    cin >> n >> l;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    double maxDist = 0;
    for(int i = 0; i < n - 1; i++){
        maxDist = max(maxDist, double(a[i + 1] - a[i]));
    }
    maxDist = max(maxDist, (double)a[0]);
    maxDist = max(maxDist, (double)l - a[n - 1]);
    cout << fixed << setprecision(10) << maxDist << endl;
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}