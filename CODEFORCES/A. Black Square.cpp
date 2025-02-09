/*
    431/A
 - theuniqueFersa: YI!!
    00:07:38 | 03/02/2025
*/
#include <iostream>
#include <map>
#define fori(a,b,c) for(int a = b; a<c; a++)
#define sz(v) int(v.size())
#define andl '\n'
using namespace std;
void solve(){
    string s;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cin>>s;
    map<char, int> m = {{'1', a},{'2', b},{'3', c},{'4', d}};
    int res = 0;
    fori(i,0,sz(s)){
        res+= m[s[i]];
    }
    cout << res << endl;
}
int main(){
    solve();
    return 0;
}