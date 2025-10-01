/*
    https://cses.fi/problemset/task/1094/
    theuniqueFersa: YI!!
    ? | 30-09-2025
*/
#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
void solve() {
    int n;
    ll min=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int *act, *next;
    for(int i=0; i<n-1; i++){
        act = &a[i];
        next = &a[i+1];
        if(*next<*act){
            int dif = *act-*next;
            *next += dif;
            min+=dif;
        }
            

    }
    cout << min << '\n';
    
}
 
int main() {
    fastIo();
    solve();
}