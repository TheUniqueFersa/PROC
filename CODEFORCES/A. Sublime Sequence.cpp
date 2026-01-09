/*
    https://codeforces.com/problemset/problem/2148/A
    O(n): YI!!
    < 4 | 09/01/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
  int x, n;
  cin>>x>>n;
  if(n&1) cout << x << endl;
  else cout << 0 << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}