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
    short a,b,c;
    cin >> a >> b >> c;
    if(a+b == c || a== b + c || b == a+c) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}   