/*
    https://codeforces.com/problemset/problem/1807/B
    theuniqueFersa: YI!!
    #ADHOC
    00:08:00 | 28/07/2025
*/
#include <iostream>

#define endl '\n'

using namespace std;
void solve(){
    int n;
    cin >> n;
    int e = 0, o = 0;
    for(int i = 0; i< n; i++){
        int inc;
        cin >> inc;
        if(inc & 1) o+=inc;
        else e+=inc;
    }
    if(e>o) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}