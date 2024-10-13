#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    cin >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int i = 0, j=0;
    while(i<n && j<m){
        if(a[i] < b[j]){
            cout << a[i];
            i++;
        } else {
            cout << b[j];
            j++;
        }
        cout << " ";
    }
    while(i<n){
        cout << a[i];
        i++;
        cout << " ";
    }
    while(j<m){
        cout << b[j];
        j++;
        cout << " ";
    }
}

int main() {
    solve();
}