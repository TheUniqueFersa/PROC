#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
vector <ll> n_triang;
void constructNTriang(){
    ll t = 0, n=1;
    while(t<1000000000){
        t += n;
        n_triang.push_back(t);
        n++;
    }
    cout << n_triang[0] << " " << n_triang[1] << " " << n_triang[2] << " " << n_triang[3] << " " << n_triang[4] << " " << endl;
}
void solve() {
    int n;
    cin >> n;
    int div;
    int left = 0, right = n_triang.size();
    int mid=0, p=0;
    while(n>1){
        div = n/3;
        while(right - left > 1) {
            mid = left + (right - left) / 2;

            if( n_triang[mid] >= div && div > n_triang[mid - 1]) {
                //cout << mid << endl;
                n = n - (n_triang[mid+1] * 3);
                n += mid+1;
                p++;
                break;
            }
            else
                if( n_triang[mid] < div )
                    left = mid + 1;
                else
                    right = mid;
        }
    }
    cout << p;
    
}

int main() {
    fastIo();
    constructNTriang();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}