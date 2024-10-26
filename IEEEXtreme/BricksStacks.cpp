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
    int n, x, stacks = 1;
    cin >> n >> x;
    vvpi b;
    vi a(n);
    for(int i = 0; i<n, i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i;
    for(i = n-2; i>0; i--){
        if(a[i] + x > a[n-1]){
            stacks++;
            b.PB(vector<int>());
        } else {
            break;
        }
    }
    for(i = n-2; i>0; i--){
        if(a[i] + x > a[n-1]){
            stacks++;
        } else {
            break;
        }
    }

    cout << stacks;

}

int main() {
    fastIo();
    solve();
}