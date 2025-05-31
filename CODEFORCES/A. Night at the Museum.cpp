/*
    https://codeforces.com/problemset/problem/731/A
    - strings
    theuniqueFersa: YI!!
    WTF | 18/05/2025
*/
#include <iostream>
#include <string>
#define endl '\n'
#define sz(v) (int)v.size()
using namespace std;

int main(){
    string s, alpha = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int fp  = alpha.find(s[0]), f;
    int r = fp, l = 26-fp;
    int k = min(r, l);
    int rot = k;
    for(char c : s.substr(1, sz(s)-1)){
        f = alpha.find(c);
        r = f;
        l = 26-f;
        if(fp>f){
            k = 26-fp;
            rot+=min(r+k, l-k);
        } else {
            k = fp;
            rot+=min(r-k, l+k);
        }
        fp = f;
    }
    cout << rot << endl;
    return 0;
}