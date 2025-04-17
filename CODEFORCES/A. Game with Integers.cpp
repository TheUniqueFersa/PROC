/*
    https://codeforces.com/problemset/problem/1899/A
- theuniqueFersa: YI!!
    ? | 16/04/2025
*/
#include <iostream>

#define endl '\n'

using namespace std;
void solve(){
    int a;
    cin >> a;
    if( ((a+1)%3) == 0 || ((a-1)%3) == 0) cout << "First" << endl;
    else cout << "Second" << endl;
}

int main(){
    int t;
    cin >>t ;
    while(t--)solve();
}