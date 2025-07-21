/*
    https://codeforces.com/problemset/problem/1542/A
    theuniqueFersa: YI!!
    < 5:00 | 17/06/2025
*/
#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;
void solve(){
    int n;
    cin >> n;
    // vector<int> a(2*n);
    int e=0,o=0;
    for(int i = 0; i < 2*n; i++){
        // cin >> a[i];
        int inc;
        cin >> inc;
        if(inc & 1) o++;
        else e++;
    }
    if(e==o) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}