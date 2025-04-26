#include <iostream>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)
#define out(v) for(auto x : v) cout << x << " "; cout<<endl;
using namespace std;
typedef vector<long long> vi;
void solve(){
    int n,m;
    cin >> n >> m;
    vi a(n);
    for(long long &each : a){
        cin >> each;
    }
    vi b(n); b[0] = 0;
    fori(i, 1, n){
        if(a[i] - a[i-1] < 0) b[i] = b[i-1] + abs(a[i] - a[i-1]);
        else b[i] = b[i-1];
    }
    vi c(n); c[0] = 0;
    for(int i = n-2; i>=0; i--){
        if(a[i] - a[i+1] < 0) c[(n-1)-i] = c[(n-1)-i-1] + abs(a[i] - a[i+1]);
        else c[(n-1)-i] = c[(n-1)-i-1];
    }
    int s, t;
    // out(b);
    // out(c); 
    // return;   
    while(m--){
        cin >> s >> t;
        s--;t--;
        if(t>s) cout << b[t] - b[s] << endl;
        else cout << c[(n-1)-t] - c[(n-1)-s] << endl;
    }
}
int main(){
    solve();
    return 0;
}