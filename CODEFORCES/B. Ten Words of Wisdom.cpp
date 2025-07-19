/*
    https://codeforces.com/problemset/problem/1850/B
    theuniqueFersa: YI!!
    < 00:30:00 | 19/07/2025
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> m;
    fori(i, 0, n){
        int w, q;
        cin>>w>>q;
        if(w<=10){
            m.insert({q, i+1});
            v.push_back(q);
        }
    }
    sort(v.begin(), v.end());
    cout << m[v[(int)v.size() - 1]] << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}