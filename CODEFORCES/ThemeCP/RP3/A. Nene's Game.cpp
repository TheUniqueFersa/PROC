/*
    1956/A
 - theuniqueFersa: YI!!
    RP3
*/
#include <iostream>
#include <vector>
#define fori(a,b,c) for(int a = b; a<c; a++)
#define in(v) for(auto& each : v){ cin >> each; }
using namespace std;
#define endl '\n'
typedef vector<int> vi;
void solve(){
    int k, q;
    cin>>k>>q;
    vi a(k), b(q);
    in(a); in(b);
    fori(i, 0, q){
        cout << min(b[i], a[0] - 1) << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t-- ) solve();
    return 0;
}