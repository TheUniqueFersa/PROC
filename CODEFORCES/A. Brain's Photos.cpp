/*
    https://codeforces.com/problemset/problem/707/A
 - theuniqueFersa: YI!!
    00:13:23 | 11/03/2025
*/
#include <iostream>
using namespace std;
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
void solve(){
    int n,m;
    cin >> n >> m;
    bool b = false;
    fori(i, 0, n){
        fori(j, 0, m){
            char inc;
            cin>> inc;
            if(inc == 'C' || inc == 'M' || inc == 'Y') b = true;
        }
    }
    if(!b) cout <<"#Black&White" << endl;
    else cout << "#Color" << endl;
}
int main(){
    // int t;
    // cin >> t;
    solve();
}