#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if(n%2 == b%2 && a>b) cout << "NO" << endl;
    else if(n%2 == b%2 && ab)
        if(a>b)cout << "NO" << endl;
        else cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}