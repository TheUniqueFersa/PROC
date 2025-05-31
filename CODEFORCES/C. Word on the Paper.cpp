/*
    https://codeforces.com/problemset/problem/1850/C
    - ADHOC
    theuniqueFersa: YI!!
    <6 | 18/05/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;
#define PB push_back
void solve(){
    string s = "";
    char m[8][8];
    int col = -1;
    for(int i = 0; i< 8; i++){
        for(int j = 0; j<8; j++){
            cin >> m[i][j];
            if(m[i][j]!='.') col = j;
        }
    }
    for(int i = 0; i<8; i++)
        if(m[i][col] != '.') s.PB(m[i][col]);
    cout << s << endl;

}
int main(){
    int t;
    cin >> t ;
    while(t--) solve();
    return 0;
}