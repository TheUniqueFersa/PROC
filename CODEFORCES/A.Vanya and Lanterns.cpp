//From Week 1 ADHOC
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
    ll l;
    cin >> n >> l;
    vector<ll> a(n,0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double maxi = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, double(a[i+1] - a[i]));
    }
    double bi = 0, bd = 0;
    maxi/=2.0;
    if(a[0] != 0){
        bi = a[0];
    }
    if(a[n-1] != l){
        bd = l-a[n-1];
    }
    maxi = max(maxi, max(bi, bd));
    cout << fixed << setprecision(10) << maxi << '\n';
}

int main() {
    fastIo();
    solve();
}