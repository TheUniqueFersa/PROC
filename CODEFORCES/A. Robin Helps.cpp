/*
    https://codeforces.com/problemset/problem/2014/A
    O(n): YI!!
    < 10 | 12/01/2026
*/
#include <iostream>

#define endl '\n'

using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  
  int poor = 0;
  int gold = 0;
  while(n--){
    int inc;
    cin >> inc;
    if(inc >= k) gold +=inc;
    else if(inc == 0){
      if(gold != 0) {
        gold --;
        poor++;
      }
    }
  }
  cout << poor << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}