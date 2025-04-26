/*
    https://codeforces.com/group/tVbcskMyQR/contest/529429/problem/E
    OG: https://codeforces.com/problemset/problem/977/B
 - theuniqueFersa: YI!!
    00:26:?? | 17/03/2025
*/
#include <bits/stdc++.h>

#define endl '\n'
#define fori(a,b,c) for(int a = b; a < c; a++)
#define S second
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    multiset<string> mm;
    set<string> m;
    fori(i, 0, n-1){
        string inc = s.substr(i, 2);
        // cout << inc;
        if(m.count(inc) < 1) m.insert(inc);
        mm.insert(inc);
    }
    pair<string, int> mx = {"", 0};
    for(string each : m){
        if(int(mm.count(each)) > mx.S) {
            mx.first = each;
            mx.S = int(mm.count(each));
        }
    }
    cout << mx.first << endl;
}