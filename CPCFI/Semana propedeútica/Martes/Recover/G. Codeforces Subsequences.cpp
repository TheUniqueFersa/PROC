/*
    https://codeforces.com/problemset/problem/1368/B
 - theuniqueFersa: YI!!
    OUTSOLVES | finally at 12/03/2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
void solve(){
    ll k;
    cin >> k;
    vll a(10, 1);
    ll r=1; // res
    int i = 0;
    while(r < k){
        r /= a[i];
        a[i]++;
        r *= a[i];
        i++;
        if(i>=10) i = 0;
    }
    string s = "codeforces";
    fori(i, 0, 10){
        fori(j, 0, a[i]){
            cout << s[i];
        }
    }
}
int main(){
    solve();
}