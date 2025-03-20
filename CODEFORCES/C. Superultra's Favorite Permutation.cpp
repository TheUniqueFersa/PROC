/*
    https://codeforces.com/contest/2037/problem/C
 - theuniqueFersa: YI!!
    ? | ?
*/
#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define PB push_back
#define fori(a,b,c) for(int a = b a<c; a++)
void solve(){
    int n;
    cin >> n;
    if(n<5) cout << -1 << endl;
    else {
        vector<int> a;
        for(int i = 1; i<=n; i+=2)
            if(i!=5) a.PB(i);
        a.PB(5);
        a.PB(4);
        for(int i = 2; i<=n; i+=2)
            if(i!=4) a.PB(i);

        for(int each : a) cout << each << " ";
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}