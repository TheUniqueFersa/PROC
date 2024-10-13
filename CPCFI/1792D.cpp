#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    set<char> s1;
    int i = 0, a, b;
    while(i < n){
        if(s1.find(s[i]) != s1.end()){
            s1.insert(s[i]);
            a++;
        } else {
            s1.insert(s[i]);
            b++;
        }
        i++
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}