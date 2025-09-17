/*
    https://codeforces.com/problemset/problem/1986/A
    ODENE
    < 4 | 16-09-2025
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v = {a,b,c};
    sort(v.begin(), v.end());
    cout << (abs(v[0]-v[1]) + abs(v[1]-v[2])) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}