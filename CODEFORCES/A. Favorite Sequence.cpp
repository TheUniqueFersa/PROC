/*
    https://codeforces.com/problemset/problem/1462/A
    theuniqueFersa: YI!!
    < 30 | 24-08-2025
*/
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

void solve1(){
    int n;
    cin >> n;
    vector<int> b(n, 0);
    for(int i = 0; i< n; i++){
        int inc; 
        cin >> inc;
        if(i&1){
            b[n-1-(i/2)] = inc;
        } else {
            b[i/2] = inc;
        }
    }
    for(int each : b) cout << each << " ";
    cout << endl;

}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int &each : a){
        cin >> each;
    }
    for(int i = 0; i<n; i+=2){
        cout << a[i/2] << " ";
        if(i/2 != n-1-(i/2)) 
            cout << a[n-1-(i/2)] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}