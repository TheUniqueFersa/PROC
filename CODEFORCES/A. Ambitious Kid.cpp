/*
    https://codeforces.com/contest/1866/problem/A
    O(n): YI!!
    < 10 | 15/01/2025
*/
#include <iostream>
#define endl '\n'
using namespace std; 
void solve(){
  int n;
  cin >> n;
  int ans = 100000;
  int inc;
  while(n--) {
    cin >> inc;
    ans = (min(abs(inc), ans));
  }
  cout << ans << endl;
}
int main(){
  solve();
  return 0;
}