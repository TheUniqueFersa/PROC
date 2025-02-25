/*
    https://codeforces.com/problemset/problem/1993/A
 - theuniqueFersa: YI!!
    RP4
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <set>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)

using namespace std;
void solve(){
    int n; 
    cin>> n;
    string s;
    cin >> s;
    multiset<char> a;
    for(auto each : s){
        if(each != '?'){
            a.insert(each);
        }
    }
    int res = 0;
    fori(i, 0, 4){
        char c = 'A';
        res += min((int)a.count(c+i), n);
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}