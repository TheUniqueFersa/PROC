#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

map<int, int> mp;
int ways=0;
int waysSum(int x, vector<int> & coins){
    if(mp.find(x) != mp.end()){
        return mp[x];
    } else {
        mp[x] = 0;
        for(auto each:coins){
            //if(x-each < 0) return -1;//no hace na
            if(x-each == 0){
                ways++;
                mp[x]++;
            }
            else if(x-each > 0) return waysSum(x-each, coins);
        }
    }
    

}
void solve() {
    int n, x;
    vector<int> coins(n);
    for(int i =0; i<n; i++){
        coins[i];
    }
    waysSum(x, coins);
    cout << ways;

    
    


}

int main() {
    fastIo();
    solve();
}