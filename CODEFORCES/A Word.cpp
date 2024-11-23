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
    int n = s.size(), lower = 0, upper = 0;
    for(int i = 0; i < n; i++){            
        if(s[i] >= 'a' && s[i] <= 'z') lower++;
        else upper++;
    }
    for(int i = 0; i < n; i++){
        if(lower >= upper) s[i] = tolower(s[i]);
        else s[i] = toupper(s[i]);
    }
    cout << s << '\n';

}

int main() {
    fastIo();
    solve();
}