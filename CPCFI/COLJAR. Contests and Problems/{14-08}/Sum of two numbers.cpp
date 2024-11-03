#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <algorithm>
 
void solve() {
    int n,x;
    cin >> n;
    cin >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool flag=true;
    while (i<n && flag){
        j=n-1;
        while(j>= i + 1 && flag){
            if(a[i] + a[j] == x){
                flag = false;
            }
            if(a[i] + a[j] > x)
                break;
            j++;
        }
        i++;
    }
    if(!flag){
        i--;
        j--;
        cout i << j;
    } else {
        cout << "IMPOSSIBLE";
    }
}
 
int main() {
    fastIo();
    solve();
}

//CODEFORCES https://cses.fi/problemset/task/1640

//CSES https://codeforces.com/problemset/problem/766/B

//codeforces https://codeforces.com/problemset/problem/810/B