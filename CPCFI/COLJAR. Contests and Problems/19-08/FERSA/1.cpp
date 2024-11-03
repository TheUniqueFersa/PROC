#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void solve() {
    int n, G=0, H=0, G2=0, H2=0;
    string A, B;
    cin >> n;
    cin >> A;
    cin >> B;
    for(int i=0;i<n; i++){
        if(A[i] == 'G')
            G++;
        else
            H++;
    }

    for(int i=0;i<n; i++){
        if(B[i] == 'G')
            G2++;
        else
            H2++;
    }
    int dif = abs(G - G2) + abs(H - H2);
    cout << dif;
}
void solve(){
    int n, G=0, 
}

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    fastIo();
    solve();
}