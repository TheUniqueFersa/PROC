//A. Boy or Girl
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
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.length(); i++){
        st.insert(s[i]);
    }
    if(st.size() % 2 == 0) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';
}

int main() {
    fastIo();
    solve();
}