/*
    https://codeforces.com/problemset/problem/1915/B
    theuniqueFersa: YI!!
    00:13:00 | 21/07/2025
*/
#include <iostream>
#include <set>
#define endl '\n'
using namespace std;
void solve(){
    char m[3][3]; int r;
    set<char> s = {'A', 'B', 'C'};
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> m[i][j];
            if(m[i][j] == '?') r = i;
        }
    }
    for(int j = 0; j<3; j++){
        if(m[r][j] != '?'){
            s.erase(m[r][j]);
        }
    }
    cout << *s.begin() << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}