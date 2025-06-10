/*
    https://codeforces.com/problemset/problem/2009/B
    theuniqueFersa: YI!!
    < 20 | 09/06/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;
const int N = 500;
void solve(){
    int n;
    cin >> n;
    int arr[N];
    char inc;
    for(int i = 0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> inc;
            if(inc == '#') arr[i] = j+1;
        }
    }
    for(int i=n-1; i>=0; i--) cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}