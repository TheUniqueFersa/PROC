/*
    https://codeforces.com/problemset/problem/1971/D
    O(n): YI!!
    < 60 | 8-03-2026
*/
#include <iostream>
#include <string>
#include <vector>

#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    size_t pos = s.find("01");
    int n = (int)s.size();
    vector<bool> v(n, false);
    int res = 0;
    if(pos != string::npos){
        int i = pos, j = pos+1;
        //FOr 0's
        do{
            v[i] = true;
            i--;
        }while(i >= 0 && s[i]!='1');
        //FOr 1's
        do{
            v[j] = true;
            j++;
        }while(j < n && s[j]!='0');
        res++;
    }
    char color = s[0];
    if(!v[0]) res++;
    for(int i = 1; i<n; i++){
        if(s[i] != color){
            color = s[i];
            if(!v[i]) res++;
        }
    }
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
