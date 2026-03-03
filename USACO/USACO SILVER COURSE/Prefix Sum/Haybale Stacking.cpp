/*
USACO 2012 January Contest, Bronze Division
Problem 2. Haybale Stacking

https://usaco.org/index.php?page=viewproblem2&cpid=104
O(nlogn) : YI!!
> 60 | 2-03-2026

*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define fori(a,b,c) for(int a = b; a<c; a++)
#define PB push_back
//#define in(v) for(auto &x : v) cin >> x;
//#define out(v) for(auto x : v) cout << x << " "; cout<<endl;
#define endl '\n'
using namespace std;

void solve(){

    //ifstream read("lineup.in");
    //use read instead of cin

    //ofstream out("lineup.out");
    //use out instead of cout

    int n, k;
    cin >> n >> k;
    vector<int> open(n+1, 0); 
    vector<int> close(n+1+1, 0);
    vector<int> pref(n+1, 0);
    vector<int> prefClose(n+1+1,0);
    fori(i, 0, k){
        int l,r;
        cin >> l >> r;
        open[l]++;
        close[r+1]++;
    }
    pref[1] = open[1];
    prefClose[1] = close[1];
    vector<int> ans(n+1, 0);
    fori(i, 1, n+1){
        pref[i] = open[i] + pref[i-1];
        prefClose[i] = close[i] + prefClose[i-1];
    }
    fori(i, 1, n+1){
        ans[i] = pref[i] - prefClose[i];
    }
    sort(all(ans));
    cout << ans[n/2 + 1] << endl;



}
int main(){
    solve();
    return 0;
}