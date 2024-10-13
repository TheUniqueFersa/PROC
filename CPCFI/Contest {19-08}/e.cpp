#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int min(int a, b){
    if(a<b)
        return a;
    else 
        return b;
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<2*n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int score=0;
    for(int i=0; i<n; i+=2){
        score+=min(a[i], a[i+1]);
    }
    cout << score;

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}