/*
    https://codeforces.com/problemset/problem/1853/A
    O(n) ?
    < 21 | 28-09-2025
*/
#include <iostream>
#define endl '\n'

using namespace std;
#define MAX_N 500
void solve(){
    int n; cin >> n;
    int a[MAX_N];
    bool flag = true;
    cin >> a[0];
    for(int i = 1; i< n; i++){
        cin >> a[i];
        if(a[i]< a[i-1]) flag = false;
    }
    int mn = 1e9+1;
    if(flag){
        for(int i = 1; i<n; i++){
            int x = a[i];
            int y = a[i-1];
            mn = min(abs(x-y), mn);
        }
        cout << (mn/2)+1 << endl;
    } else cout << 0 << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}