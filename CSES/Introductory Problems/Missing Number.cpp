#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)
#define MAX (int)2e5
#define all(v) v.begin(),v.end()
#define F first
#define S second


using namespace std;
vector<pair<int,int>> a(MAX+1, {0,0});
void solve(){
    int n;
    cin >> n;
    a[0].F = 1;
    fori(i, 1, MAX+2){
        a[i].S = i;
    }
    fori(i,0,n-1){
        int inc;
        cin >> inc;
        a[inc].F = 1;
        // a[inc].S = inc;
    }
    sort(all(a));
    cout << a[0].S << endl;
    // auto a_nearest = upper_bound(all(a), 0);
    // int rr = a_nearest - a.begin();
    // cout << a_nearest* << endl;
}
int main(){
    solve();
    return 0;
}