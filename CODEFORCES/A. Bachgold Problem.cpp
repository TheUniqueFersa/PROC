/*
    https://codeforces.com/problemset/problem/749/A
    theuniqueFersa: YI!!
    <15 | 09/05/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << n/2 << endl;
    if(n%2==0){
        for(int i = 0; i<n/2; i++) cout << 2 << " ";
    } else {
        for(int i = 0; i<(n/2)-1; i ++) cout << 2 << " ";
        cout << 3 ;
    }
    cout << endl;
}
int main(){
    solve();
    return 0;
}