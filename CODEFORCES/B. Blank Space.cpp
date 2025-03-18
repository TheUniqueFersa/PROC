/*
    https://codeforces.com/problemset/problem/1829/B
 - theuniqueFersa: YI!!
    timeToSolve | 04/03/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define fori(a,b,c) for(int a = b; a<c; a++)
void solve(){
    int n;
    cin >> n;
    int res =0;
    int inc, maxi=0;
    cin >> inc;
    if(inc) res = 0;
    else res = 1;
    fori(i, 1, n){
        cin >> inc;
        if(!inc) res ++;
        else{
            maxi = max(res, maxi);
            res = 0;
        }
    }
    maxi = max(res, maxi);
    cout << maxi << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--) solve();
    return 0;
}