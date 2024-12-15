#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vii;
typedef vector<vpi> vvpi;

void solve() {
    int l, n;
    ll m, x;
    cin >> l;
    string inc;
    stack<int> pila;
    for(int i = 0; i < l; i++) {
        cin >> s;
        if(s == "add") {
            x += m;
            if(x > 4294967296-1) {
                cout << "OVERFLOW!!!";
                return;
            }
        }
        else if(s=="for"){
            cin >> n;
            pila.push(n);
            m*=n;
        }
        else if(s=="end"){
            m/=pila.top();
            pila.pop();
        }
    }
    cout << x;
}

int main() {
    fastIo();
    solve();
}