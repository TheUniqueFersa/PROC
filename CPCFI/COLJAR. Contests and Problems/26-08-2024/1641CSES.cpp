#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    cin >> x;
    vector<pair<int, int>> a({0,0});
    for(int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int j=a.size();
    while(a[j-1] > x || a[j-1] + a[0]){
        a.popback();
        j=a.size();
    }
    int i = 0, k;
    while(j >= 2){
        while(i < j){
            
        }
        j--;
    }
    

    }
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}