/*
    https://codeforces.com/problemset/problem/1426/A
    theuniqueFersa: YI!!
    < 30 | 15/05/2025
*/
#include <iostream>
#include <cmath>
#define endl '\n'

using namespace std;

void solve(){
    float n, x; 
    cin >> n >> x;
    if(n>2)
        cout << ceil((n-2)/x) + 1<< endl;
    else 
        cout << 1 << endl;
}
int main(){
    int t ;
    cin >> t;
    while(t--)solve();
    return 0;

}