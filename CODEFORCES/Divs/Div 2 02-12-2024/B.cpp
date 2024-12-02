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
    int n, inc;
    cin >> n;
    vi a(n+1, 0);
    set<int> s;
    for(int i = 0; i<n; i++){
        cin >> inc;
        s.insert(inc);
        a[inc]++;
    }
    // cout << s.size() << '\n';
    
    sort(a.begin(), a.end());
    // for(auto x: a){
    //     cout << x << ' ';
    // }
    int p_1=0, p_n=0, i;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            p_1++;
        } else if(a[i] > 0){
            p_n++;
        }
    }
    int ans=0;
    if(p_1%2 == 0) ans = p_1;
    else ans = 2*((p_1/2)+1);
    ans += p_n;
    cout << ans << '\n';

    // for(i = n-s.size()+1; i <= n; i++){
    //     if(a[i] == 1){
    //         p_1++;
    //     } else {
    //         break;
    //     }
    // }
    // // cout << "p_1: " << p_1 << '\n';
    // int ans = 0;
    // if(p_1%2 == 0) ans = p_1;
    // else ans = 2*((p_1/2)+1);
    // ans += (n-s.size()+1)-p_1;
    // cout << ans << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}