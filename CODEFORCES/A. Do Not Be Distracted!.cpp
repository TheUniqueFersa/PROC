/*
    https://codeforces.com/problemset/problem/1520/A
 - theuniqueFersa: YI!!
    00:13:05 | 22/02/2025
*/
#include <bits/stdc++.h>
#define fori(a,b,c) for(int a = b; a<c; a++)
#define endl '\n'

using namespace std;
void solve(){
    string s;
    int n;
    cin >> n >> s;
    set<char> a;
    char current = s[0];
    fori(i, 1, n){
        if(s[i] != current){
            if(a.count(s[i]) != 0){
                cout << "NO" << endl;
                return;
            } else {
                a.insert(current);
                current = s[i];
            }
            
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
