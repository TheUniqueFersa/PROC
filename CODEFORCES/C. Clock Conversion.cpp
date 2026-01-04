/*
    https://codeforces.com/problemset/problem/1950/C
    O(n): YI!!
    ? | 30/12/2025
*/
#include <iostream>
#include <string>
#include <sstream>
#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    stringstream ss(s);

    char delim = ':';
    string h, m;
    getline(ss, h, delim);
    getline(ss, m, delim);
    //cout << h << ':' << m << endl;
    int hh, mm;
    hh = stoi(h);
    string add;
    add = (hh>=12)? " PM": " AM";
    if(hh>12){
        hh-=12;
        h = to_string(hh);
        //cout << h.length();
        if(h.length() == 1)
            h = "0"+h;
        //cout << h << endl;
    }
    if(hh==0)
        h = "12";
    //mm = stoi(m);
    cout << h << ':' << m << add << endl;
    //cout << hh << ':' << mm << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}