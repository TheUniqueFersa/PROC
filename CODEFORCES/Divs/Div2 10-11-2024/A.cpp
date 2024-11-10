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

int path(char c){
    if(c == 'N'||c == 'E') return 1;
    if(c == 'S'||c == 'W') return -1;
}

void solve() {
    int n, a, b, c=0, d=0; //x, y
    string s;
    cin >> n >> a >> b;
    cin >> s;
    if(c == a && d == b) {
        cout << "YES" << '\n';
        return;
    }
    
    vector<int> alreadyVc;
    vector<int> alreadyVd;
    while(c != a || d != b) {
        alreadyVc.PB(c);
        alreadyVd.PB(d);
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'N') d++;
            if(s[i] == 'S') d--;
            if(s[i] == 'E') c++;
            if(s[i] == 'W') c--;        
            if(c == a && d == b) {
                cout << "YES" << '\n';
                return;
            }
        }
        if(c > 100 || c < -100 || d > 100 || d < -100) {
            cout << "NO" << '\n';
            return;
        }
        if(find(alreadyVc.begin(), alreadyVc.end(), c) != alreadyVc.end() && find(alreadyVd.begin(), alreadyVd.end(), d) != alreadyVd.end()) {
            cout << "NO" << '\n';
            return;
        }

    }
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}