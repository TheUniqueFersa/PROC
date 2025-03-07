/*
    https://codeforces.com/problemset/problem/1676/B
 - theuniqueFersa: YI!!
    00:08:16 | 06/03/2025
*/
#include <iostream>

#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    int mini = 100000000, total = 0;
    for(int i = 0; i < n; i++){
        int inc;
        cin >> inc;
        mini = min(inc, mini);
        total += inc;
    }
    cout << total - n*mini << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}