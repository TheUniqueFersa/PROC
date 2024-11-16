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
    int n, l;
    cin >> n >> l;
    vi a(n,0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        maxi = max(maxi, abs(a[i]-a[i+1]));
    }
    int bi, bd;
    if(a[0] != 0){
        bi = a[0];
    }
    if(a[n-1] != l){
        bd = l-a[n-1];
    }
    float maxu = float(maxi)/2;
    cout << max(maxu, max(bi, bd)) << '\n';

}

int main() {
    fastIo();
    solve();
}