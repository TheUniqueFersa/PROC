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
    int n;
    cin >> n;
    vi a(n);
    int sum = 0, me = 0;
    for(int i = 0; i <n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int coins = 0;
    for(int i = 0; i < n; i++){
        me += a[i];
        sum -= a[i];
        coins++;
        if(me > sum) break;
    }
    cout << coins << '\n';
}

int main() {
    fastIo();
    solve();
}