/*
    https://codeforces.com/problemset/problem/1980/A
    O(n) ?
    < 23 | 26-09-2025
*/
#include <iostream>
#include <map>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)

using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    map<char, int> k; //key
    vector<int> v(7, 0);
    fori(i, 0, 7){
        k.insert({'A'+i, i});
    }
    fori(i, 0, n){
        char c;
        cin >> c;
        v[k[c]]++;
    }
    int ans = 0;
    /*
    for(auto each : v){
        cout << each << " ";
    }
    cout << endl;
    */
    fori(i, 0, 7){
        int dif = m-v[i];
        if(dif>0) ans+=dif;
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}