#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int avgf(vector<pair<int, int>> a){
    int avg = 0;
    for(int i=0; i<a.size(); i++){
        avg += a[i].second;
    }
    return avg/a.size();
}
void solve() {
    int n, avg, r;
    cin >> n;
    cin >> r;
    cin >> avg;
    vector<pair<int, int>> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i].second;
        cin >> a[i].first;
    }
    sort(a.begin(), a.end());
    int i =0, ess=0;
    while(avg != avgf(a)){
        if(a[i].second < r){
            ess+=a[i].first;
            a[i].second++;
        } else {
            i++;
        }
    }
    cout << ess;
}

int main() {
    // freopen("breedflip.in", "r", stdin);
    // freopen("breedflip.out", "w", stdout);
    fastIo();
    solve();
}