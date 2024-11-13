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
    string s, s2 = "";
    cin >> s;
    int i = 0;
    while(i < s.length()){
        if(s[i] != '+'){
            s2 += s[i];
        }
        i++;
    }
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s2.length(); i++){
        cout << s2[i];
        if(i != s2.length() - 1) cout << "+";
    }

}

int main() {
    fastIo();
    solve();
}