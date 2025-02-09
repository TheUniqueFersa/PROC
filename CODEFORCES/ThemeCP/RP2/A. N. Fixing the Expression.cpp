/*
    2038/N
 - theuniqueFersa: YI!!
    RP2
*/
#include <iostream>
#include <string>
#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    int a = s[0]-'0', o = s[1], b = s[2]-'0';
    if(o=='<'){
        if(a<b) cout << s << endl;
        else if(a>b) cout << a << '>' << b << endl;
        else cout << a << '=' << b << endl;
    } else if(o=='>') {
        if(a>b) cout << s << endl;
        else if(a<b) cout << a << '<' << b << endl;
        else cout << a << '=' << b << endl;
    } else{
        if(a==b) cout << s << endl;
        else if(a>b) cout << a << '>' << b << endl;
        else cout << a << '<' << b << endl;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}