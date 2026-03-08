/*
    https://codeforces.com/problemset/problem/282/A
    O(1): YI!!
    5 | 07/03/2026
*/
#include <iostream>

#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    int res = 0;
    string s;
    for(int i = 0; i< n; i++){
        cin >> s;
        if(s[0] == '+' || s[2] == '+') res++;
        else res--;
    }
    cout << res << endl;
}
int main(){
    solve();
    return 0;
}