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

int toArabic(char c) {
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;
}

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int piv, num=0, sum=0;
        piv = toArabic(s[s.size()-1]);
        
        for(int i = s.size()-2; i >= 0; i--) {
            if(toArabic(s[i]) <= piv) {
                sum += toArabic(s[i]);
            } else if(i == 0 || toArabic(s[i]) > piv){
                
                num += piv - sum;
                piv = toArabic(s[i]);
                sum = 0;
            }
        }
        if(sum != 0) num += sum;
        cout << num << '\n';
    }
    
}

int main() {
    fastIo();
    solve();
}