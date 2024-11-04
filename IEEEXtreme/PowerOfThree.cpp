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

double logbase(double a, double base)
{
   return log(a) / log(base);
}

void solve() {
    ll n;
    cin >> n;
    int log3 = logbase(n, 3);
    cout << pow(3, log3);
    cout << log3;
    if(log3 - (int)log3 < 0.0000000001 && pow(3, log3) == n) {
        printf("True\n");
    } else
        printf("False\n");
    }
}

int main() {
    fastIo();
    solve();
}