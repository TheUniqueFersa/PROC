/*
    https://codeforces.com/problemset/problem/1853/A
 - theuniqueFersa: YI!!
    RP4
*/
#include <bits/stdc++.h>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)

using namespace std;
typedef vector<int> vi;
#define in(v) for(auto& each : v) cin >> each;
#define all(v) v.begin(),v.end()
#define PB push_back
void solve(){
    int n; 
    cin >> n;
    bool sorted = true;
    int piv;
    cin >> piv;
    // vi dif;
    set<int> s;
    fori(i, 0, n-1){
        int inc;
        cin >> inc;
        if(inc-piv < 0) sorted = false;
        else {
            s.insert(inc-piv);
        }
        piv = inc;
    }
    if(sorted){
        auto first = s.begin();
        // first = next(first);
        // cout << *first << endl;
        if(*first == 0) cout << 1 << endl;
        else if(*first <= 2 && *first > 0) cout << *first << endl;
        else if(*first > 2) {
            if((*first)%2 == 0) cout << ((*first)/2) + 1 << endl;
            else cout << ((*first)+1)/2 << endl;
        }
    } else {
        cout << 0 << endl;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}