
/*
    https://codeforces.com/problemset/problem/1370/A
    theuniqueFersa: YI!!
    ? | 27/04/2025
*/
#include <bits/stdc++.h>

#define endl '\n'
typedef long long ll;

using namespace std;
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
vector<ll> get_divisors(ll n) {
    vector<ll> divs;
    for (int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {
            divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}

void solve(){
    int n;
    cin >> n;
    // vector<ll> d = get_divisors(n);
    // // for(auto each : d){
    // //     cout << each << " ";
    // // }
    // int m = (int)d.size();
    // if(m==1) {
    //     cout << 1 << endl;
    //     return;
    // }
    // if(m==2 && n>4) {
    //     n--;
    //     d = get_divisors(n);
    //     m = (int)d.size();
    // }
    // cout << d[m-2] << endl;

    // cout << gcd(a,b) << endl;
    if(n==1){
        cout << 1 << endl;
        return ;
    } 
    cout << n/2 << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) 
    solve();
    return 0;
}