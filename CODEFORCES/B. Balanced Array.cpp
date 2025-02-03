/*
    1343/B
 - theuniqueFersa: YI!!
    00:28:06 | 02/02/2025
*/
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fori2(a, b, c) for(int a = b; a<c; a+=2)
typedef vector<int> vi;
#define out(v) for(auto& each: v) cout << each << " "; cout << endl;
void solve(){
    int n;
    cin >> n;
    if((n/2) % 2 != 0) cout << "NO" << endl;
    else {
        vi v(n);
        int x = 2;
        fori2(i, 0, n/2){
            v[i] = x; 
            v[i+1] = x+2;
            v[(n/2) + i] = x-1;
            v[(n/2) + i + 1] = (x+2) + 1;
            x+=6;
        }
        cout << "YES" << endl;
        out(v);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
