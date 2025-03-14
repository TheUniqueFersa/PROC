/*
    https://codeforces.com/problemset/problem/1873/B
 - theuniqueFersa: YI!!
    00:16:20 | 02/03/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    int m = 10;
    // cout << m << endl;
    int res = 1;
    short n_0 = 1;
    for(int i = 0; i < n; i++){
        
        int inc;
        cin >> inc;
        m = min(inc, m);
        if(inc != 0){
            res *= inc;
        } else {
            n_0--;
        }

    }
    if(n_0<0){
        cout << 0 << endl;
        return;
    }
    if(m!=0)
        res /= m;
    m++;
    res *= m;
    cout << res << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}