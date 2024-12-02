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
    short n, m;
    cin >> n >> m;
    for(short i = 0; i<n; i++){
        for(short j = 0; j < m; j++){
            if(i%2 == 1){
                if(i%4 == 1 && j == m-1){
                    cout << "#";
                } else if(i%4 == 3 && j == 0){
                    cout << "#";
                } else {
                    cout << ".";
                }
            } else {
                cout << "#";
            }
        }
        cout << '\n';
    }
}

int main() {
    fastIo();
    solve();
}