#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    cin >> m;
    string s;
    vector<pair<string,int>> vs(n);
    for(int i=0; i<n; i++){
        cin >> s;
        vs[i].first = s;
        vs[i].second = i+1;
    }
    int b,e, i;
    bool flag;
    char a;
    for(int t = 1; t<=m; t++){
        b = 0;
        e=-1;
        i=0;
        while(i<n-1){
            flag = false;
            b=e+1;
            a = vs[b].first[t-1];
            while(a == vs[++i].first[t-1]){
                flag = true;
                if(flag)
                    e = i;
                else
                    e = i-1;
            }
            if(t%2 == 0){
                reverse(vs.begin() + b, vs.begin + e);
            } else {
                sort(vs.begin() + b, vs.begin + e);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << vs[i].second;
    }
}

int main() {
    solve();
}