/*
    https://codeforces.com/problemset/problem/1791/B
    theuniqueFersa: YI!! - DS
    00:12:24 | 08/06/2025
*/
#include <iostream>
#include <map>
using namespace std;
#define F first
#define endl '\n'
#define S second
void solve(){
    int n;
    cin >> n;
    string s;
    cin >>s;
    map<char, pair<int, int>> directions = {{'L', {0, -1}},
                                            {'R', {0, 1}},
                                            {'U', {1, 0}},
                                            {'D', {-1, 0}}};
    pair<int, int> act = {0,0};
    const pair<int, int> candy = {1,1};
    for(int i = 0; i<n; i++){
        act.F+=directions[s[i]].F;
        act.S+=directions[s[i]].S;
        if(act == candy){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}