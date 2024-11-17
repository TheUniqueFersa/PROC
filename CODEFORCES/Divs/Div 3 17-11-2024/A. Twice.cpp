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
    int n, score = 0, inc;
    cin >> n;
    vpi a;
    vi b(n, 0);
    for(int i = 0; i < n; i++){
        cin >> inc;
        a.PB({inc, i});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n-1; i++){
        if(a[i].F == a[i+1].F && b[a[i].S] == 0 && b[a[i+1].S] == 0){
            b[a[i].S] = 1;
            b[a[i+1].S] = 1;
            score++;
        }
    }
    cout << score << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}