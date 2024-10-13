#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define MOD 1000000000+7

map<int, int> mp;
int ways=0;
int waysSum(int x, vector<int> & coins){
    if(mp.find(x) != mp.end()) return mp[x];
    mp[x] = 0;
    for(auto each:coins){
        //if(x-each < 0) return -1;//no hace na
        if(x-each == 0){
            ways++;
            mp[x]++;
            //return 1;
        }
        else if(x-each > 0) 
            mp[x] += waysSum(x-each, coins);
            mp[x] %= MOD;
    }
    return mp[x];
    
    

}
void solve() {
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> coins(n);
    for(int i =0; i<n; i++){
        cin >> coins[i];
    }
    waysSum(x, coins);
    cout << mp[x];
}

int main() {
    fastIo();
    solve();
}