#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;

void solve() {
    string s;
    int k;
    cin >> s >> k;
    cout << s << endl;
    string s2 = s;
    sort(s2.begin(), s2.end());
    for(int i = 0; i<k; i++){
        char temp =  s2[s2.length()-1];
        s.insert(s.begin(), temp);
        s2.erase(s2.length()-1);
        s.erase(s.rfind(temp));
    }
    cout << s << endl;
    
}

int main() {
    fastIo();
    solve();
}