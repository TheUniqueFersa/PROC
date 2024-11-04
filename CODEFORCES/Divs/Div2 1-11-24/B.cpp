//Medians
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
    int n, k, med;
    cin >> n >> k;
    med = n/2 + 1;
    if(n/2 + 1 == k){
        cout << 1 << '\n';
        cout << "1" << '\n';
    } else if(k > n/2 + 1 && k != n && k < n){
        if(k % 2 == 0){
            cout << 3 << '\n';
            cout << "1 " << k << " " << k+1 << '\n';
        } else {
            cout << 5 << '\n';
            cout << "1 " << k-1 << " " << k << " " << k+1 << " " << k+2 <<'\n';
        }
    } else {
        cout << "-1" << '\n';
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}