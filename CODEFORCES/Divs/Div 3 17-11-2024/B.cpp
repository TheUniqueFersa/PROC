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
    int k, c_1=0, c_x=0, n_1=-1, n_x=-1;
    cin >> k;
    vi a(k);
    int x = k-2;
    for(int i = 0; i<k; i++) cin >> a[i];
    for(int i = 0; i < k; i++){
        if(a[i] == 1){
            c_1++;
            n_1 = i;
        } 
        if(a[i] == x) {
            c_x++;
            n_x = i;
        }
        if(n_1 != -1 && n_x != -1) break;
    }
    // cout << n_1 << " " << n_x << '\n';
    if(n_1 != -1 && n_x != -1){
        cout << a[n_1] << " " << a[n_x] << '\n';
        return;
    }
    sort(a.begin(), a.end());
    // cout << 0+c_1 << " " <<  k-c_x;
    for(int i = 0+c_1; i < k-c_x; i++){
        if(x % a[i] == 0){
            int n = x/a[i];
            for(int j = i; j < k-c_x; j++){
                if(n % a[j] == 0 && n / a[j] == 1){
                    cout << a[i] << " " << a[j] << '\n';
                    return;
                }
                if(a[j] > n) break;
            }
        }
    }

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}