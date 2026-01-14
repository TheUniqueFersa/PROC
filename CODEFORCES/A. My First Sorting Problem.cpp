/*
    https://codeforces.com/problemset/problem/1971/A
    O(n): YI!!
    < 3 | 13/01/2026
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
  int a,b;
  cin >> a >> b;
  cout << min(a,b) << " " << max(a,b) << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}