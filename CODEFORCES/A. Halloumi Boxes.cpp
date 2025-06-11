/*
    https://codeforces.com/problemset/problem/1903/A
    theuniqueFersa: YI!!
    ? | 10/06/2025
*/
#include <iostream>

#define endl '\n'
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    bool ord = true;
    int inc, ant;
    cin >> ant;
    for(int i = 1; i<n; i++){
        cin >> inc;
        if(inc < ant) ord = false;
        ant = inc;
    }
    if(k < 2 && !ord) cout << "NO" << endl; 
    else cout << "YES" << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}