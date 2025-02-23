/*
    https://codeforces.com/problemset/problem/141/A
 - theuniqueFersa: YI!!
    00:18:16 | 23/02/2025
*/
#include <iostream>
#include <set>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
#define sz(v) (int)(v.size())

using namespace std;

void solve(){
    string s, s1, s2;
    cin >> s1 >> s2 >> s;
    s1 = s1 + s2;
    multiset<char> ms, ms2;
    set<char> ss;
    if(sz(s) != sz(s1)) cout << "NO" << endl;
    else {
        for(auto each : s1) ms2.insert(each);
        for(auto each : s){
            ms.insert(each);
            ss.insert(each);
        } 
        for(auto each:ss){
            if(ms.count(each) != ms2.count(each)){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}
int main(){
    solve();
    return 0;
}
