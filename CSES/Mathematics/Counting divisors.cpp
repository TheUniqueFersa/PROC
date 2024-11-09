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


int divisors(int n) {
    ll num = 0;//Deberia ser int, pero si me jalo c:
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            num++;
            if (i * i != n) {
                num++;
            }
        }
    }
    return num;
}

void solve() {
    int n,x;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> x;
        cout << divisors(x) << '\n';
    }
}

int main() {
    fastIo();
    solve();
}