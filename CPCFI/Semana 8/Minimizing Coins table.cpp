#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> coins(n);
    vector<int> dp(x);
    
    for(int i =0; i<n; i++){
        cin >> coins[i];
    }
    dp[0]=1;
    dp[1]=1;
    int sum = 0;
    for(int i=2; i<x; i++){
        for(auto each:coins){
            if(x - each >= 0){
                sum+=dp[x-each];
                dp[i]+=dp[x-each];
            }
        }
    }
    cout << sum;

}

int main() {
    fastIo();
    solve();
}