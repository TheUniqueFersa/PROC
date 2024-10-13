#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, q;
    cin >> n;
    cin >> q;
    vector<pair<int, int>> vp(n+1, {0,0});
    int aq;

    vector<int> vx(n);
    for(int i=0; i<n; i++){
        cin >> vx[i];
    }
    vector<pair<int, int>> qs(q);
    for(int j=0; j<q; j++){
        cin >> aq;
        vp[aq].first++;
        qs[j].first = aq;
        cin >> aq;
        vp[aq].first++;
        qs[j].second = aq;
    }
    for(int i = 0; i<=n; i++){
        vp[i].second = i;
    }
    sort(vp.begin(), vp.end(), greater<int>());//
    sort(vx.begin(), vx.end());
    vector<int> nv(n+1);
    for(int i=0; i<n; i++){
        nv[vp[i].second] = vx[vx.size() - 1];
        vx.pop_back();
    }
    for(auto each:nv){
        cout << each;
    }


    printf("Apoco si");
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}