/*
    https://codeforces.com/problemset/problem/1520/B
    theuniqueFersa: YI!!
    < 01:00:00 | 17/07/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
    int x, x_0, d;
    string s;
    cin >> s;
    d = (int)s.size();
    x_0 = s[0]-'0';
    bool ascen = true;
    int res = 0;
    if(d>1){
        int x_2;
        for(int i=0; i<d-1; i++){
            x_2 = s[i+1]-'0';
            x = s[i]-'0';
            if(x_2 > x) {
                break;
            } else if(x_2 < x) {
                ascen = false;
                break;
            }
        }
    }
    if(ascen) res++;
    
    res+=x_0-1;
    res += 9*(d-1);
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}