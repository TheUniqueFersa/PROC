#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, i=0;
    cin >> n;
    string s;
    cin >> s;
    while(s.find("xxx") != s.npos){
        s.erase(s.find("xxx"), 1);
        i++;
    }
    cout << i;
}

int main() {
    solve();
}