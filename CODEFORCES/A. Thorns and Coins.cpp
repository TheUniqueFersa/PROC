/*
    https://codeforces.com/problemset/problem/1932/A
    O(n): YI!!
    < 60 | 25-12-2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<char> v(n);
    vector<int> prefix(n, 0);
    cin >> v[0];
    prefix[0] = 0;
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i] == '@'){
            prefix[i] = 1;
        }
        prefix[i] = prefix[i] + prefix[i-1];
    }
    fori(i, 0, n-1){
        if(v[i] == '*' && v[i+1] == '*'){
            cout << prefix[i] << endl;
            return;
        }
    }
    cout << prefix[n-1] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}