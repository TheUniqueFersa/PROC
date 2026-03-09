/*
    https://codeforces.com/problemset/problem/1971/B
    O(n): YI!!
    < 10 | 24-02-26
*/
#include <iostream>
#include <set>

#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    set<char> ss;
    for(int i = 0; i<s.size(); i++){
        ss.insert(s[i]);
    }
    if(ss.size() > 1) {
        cout << "YES" << endl;
        cout << s[s.size() - 1 ];
        for(int i = 0; i < s.size()-1; i++) cout << s[i];
        cout << endl;
    } else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
