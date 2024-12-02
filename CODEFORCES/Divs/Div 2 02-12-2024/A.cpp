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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(auto &x: a) cin >> x;
    sort(a.rbegin(), a.rend());
    int coins = 0, sum = 0;
    for(int i = 0; i<n; i++){
        if(sum < k){
            sum += a[i];
        }
        if(sum > k){
            sum -= a[i];
            coins = abs(k-sum);
            break;
        }else if(sum == k){
            break;
        }
    }
    if(sum < k) coins = k-sum;
    cout << coins << '\n';
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}