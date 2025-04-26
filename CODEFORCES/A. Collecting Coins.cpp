/*
    https://codeforces.com/problemset/problem/1294/A
 - theuniqueFersa: YI!!
    -? | 23/03/2025
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
void solve(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int dif = 0;
    int ar[3] = {a,b,c};
    sort(ar, ar+3, cmp);
    for(int i = 1; i<3; i++){
        dif+=abs(ar[0]-ar[i]);
    }
    n-=dif;
    if(n%3==0 && n>=0) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}
