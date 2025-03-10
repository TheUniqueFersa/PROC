/*
    https://codeforces.com/problemset/problem/1772/A
 - theuniqueFersa: YI!!
    00:04:20 | 09/03/2025
*/
#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

void solve(){
    string s;
    cin >> s;
    int a = s[0]-'0', b = s[2]-'0';
    cout << a+b << endl;

}
int main(){
    int t;
    cin >>t;
    while(t--)solve();
    return 0;
}