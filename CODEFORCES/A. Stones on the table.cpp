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
    string s;
    int n, k = 0;
    cin >> n >> s;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]) k++;
    }
    cout << k;
}

int main() {
    fastIo();
    solve();
}