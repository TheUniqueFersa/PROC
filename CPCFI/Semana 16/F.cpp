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
    int l;
    cin >> l;
    ll n, m=1, x = 0, o=0;
    string s;
    stack<int> pila;
    while (l--){
        cin >> s;
        if(s == "add"){
            if(m > 4294967295 - x){
                cout << "OVERFLOW!!!" << '\n';
                return;
            }
            x+=(m+o);
            if(x > 4294967295){
                cout << "OVERFLOW!!!" << '\n';
                return;
            }
        } else if(s == "for"){
            cin >> n;
            if(m > 2147483647){
                
            }
            m*=n;
            pila.push(n);
        } else if(s == "end"){
            m/=pila.top();
            pila.pop();
        }
    }
    cout << x << '\n';
    
}

int main() {
    fastIo();
    solve();
}