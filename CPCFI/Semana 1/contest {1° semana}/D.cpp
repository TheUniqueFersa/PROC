#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <algorithm>
 
void solve() {
    int n, p, q, inc;
    cin >> n;
    cin >> p;
    cin >> q;
    set<int> a;
    for(int i=0; i<p; i++){
        a.insert(inc);
    }
    for(int i = 0; i<q; i++){
        a.insert(inc);
    }
    bool flag = true;
    while(n>0 && flag){
        if(a.find(n) == a.end())
            flag = false;
        
        n--;
    }
    if(flag){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
 
int main() {
    fastIo();
    solve();
}