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
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2==0)
            cout << "I hate ";
        else cout << "I love ";
        if(i<n-1) cout << "that ";
    }
    cout << "it" << '\n';
}

int main() {
    fastIo();
    solve();
}