/*
    https://codeforces.com/problemset/problem/1791/C
 - theuniqueFersa: YI!!
    00:11:25 | 10/03/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = int(s.size()-1), res = 0;
    while(i<j && ((s[i] == '0' && s[j] == '1' ) || (s[i] == '1' && s[j] == '0' ))){
        res++;
        i++;
        j--;
    }
    cout << n - 2*res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}
