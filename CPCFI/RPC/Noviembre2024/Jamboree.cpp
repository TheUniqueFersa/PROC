#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
    int n, m;
    cin >> n >> m;
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
if(m >= n){
        cout << a[0] << '\n';
    } else {
        for(int i = m; i < n; i++)
        {
            //cout << abs(i % m - (m-1)) <<endl;
            a[abs(i % m - (m-1))] += a[i];
        }
        
        sort(a.rbegin(), a.rend());
        cout << a[0] << '\n';
    }
    
}

int main() {
    fastIo();
    solve();
}