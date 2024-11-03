//B. StartUp
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

void solve() {
    int n, k, b, c;
    cin >> n >> k;

    vi mac;
    map<int, int> m;
    int inc=0, sum=0;
    for(int i = 0; i < k; i++) {
        cin >> b >> c;
        if(m.find(b) == m.end()) {
            m.insert({b, inc});
            inc++;
            mac.PB(c);
        } else {
            mac[m[b]] += c;
        }
    }
    sort(mac.rbegin(), mac.rend());
    if (n > mac.size()) n = mac.size();
    for(int i = 0; i < n; i++) {
        sum += mac[i];
    }
    cout << sum << '\n';




    // vi brands(200000, 0);
    // for(int i = 0; i < k; i++) {
    //     cin >> b >> c;
    //     brands[b] += c;
    // }
    // sort(brands.rbegin(), brands.rend());
    // int sum = 0;
    // for(int i = 0; i < n; i++) {
    //     sum += brands[i];
    // }
    // cout << sum << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}