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
    int n, m, k, l, x;
    cin >> n >> m >> k;
    if(n==m){
        cout << 1 << '\n';
        return;
    } else {
        l = n/m;
        x = n - 2*(m-1);
        if(k == 1){
            cout << l << '\n';
        } else if(k < x){
            cout << l - 1 << '\n';
        } else if(k>x){
            cout << 1 << '\n';
        }
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}