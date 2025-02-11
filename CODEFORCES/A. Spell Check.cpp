/*
    1722/problem/A
 - theuniqueFersa: YI!!
    00:08:54 | 09/02/2025
*/
#include <iostream>
#include <set>
#define c(v, s) v.count(s)
#define endl '\n'
using namespace std;


void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    if(n!=5) cout << "NO" << endl;
    else {
        set<int> ss;
        for(auto each: s){
            ss.insert(each);
        }
        if(c(ss, 'T') && c(ss, 'i') && c(ss, 'm')&& c(ss, 'u')&& c(ss, 'r')) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}