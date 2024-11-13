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
    int a, b, years = 0;
    cin >> a >> b;
    while(a<=b){
        a*=3;
        b*=2;
        years++;
    }
    cout << years << '\n';
}

int main() {
    fastIo();
    solve();
}