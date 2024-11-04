//Quintomania
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

void solve() {
    int n, ant, inc;
    cin >> n;
    bool flag = true;
    cin >> ant;
    for(int i = 0; i < n-1; i++) {
        cin >> inc;
        if(abs(ant - inc) != 5 && abs(ant - inc) != 7)
            flag = false;
        ant = inc;
    }
    cout << (flag ? "YES" : "NO") << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}