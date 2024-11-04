//Circuit
#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;

void solve() {
    int l, s = 0, so = 0, inc; //s stands for swithces, so stands for switches on (O men)
    cin >> l;
    s = 2*l;
    for(int i = 0; i < 2*l; i++){
        cin >> inc;
        if(inc == 1)
            so++;
    }
    if(so % 2 == 0){
        cout << 0;
    } else {
        cout << 1;
    }
    if(so <= l){
        cout << " " << so << '\n';        
    }
    else {
        cout << " " << l - (so - l) << '\n';    
    }
    

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}