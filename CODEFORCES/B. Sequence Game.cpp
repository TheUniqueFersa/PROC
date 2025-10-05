/*
    https://codeforces.com/problemset/problem/1862/B
    ODENE YI
    < 33 | 05-10-2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;
#define MAX_N (2*100000 + 1)
void solve(){
    int n; cin >> n;
    int a[MAX_N];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        // cout << a[i] << " ";
    }
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i = 1; i<n; i++){
        if(a[i-1]>a[i]) {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
        else{
            ans.push_back(a[i]);
        }
    }
    cout << (int)ans.size() << endl;
    for(auto each : ans){
        cout << each << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}