/*
    https://codeforces.com/problemset/problem/2167/B
    O(n): YI!!
    < 6 | 06/01/2026
*/
#include <iostream>
#include <algorithm>
#define endl '\n'

using namespace std;

void solve(){
  int n;
  cin >> n;
  string s,s2;
  cin >> s >> s2;
  sort(s.begin(), s.end());
  sort(s2.begin(), s2.end());
  //cout << s << " " << s2;
  if(s == s2) cout << "YES" << endl;
  else cout << "NO" << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}
