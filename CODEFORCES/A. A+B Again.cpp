/*
    1999/A
 - theuniqueFersa: YI!!
    > 00:05:00 | 30/01/2025
*/
#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
void solve(){
    string a;
    cin >> a;
    int b = a[0] - '0',c = a[1] - '0';
    cout << b + c << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}