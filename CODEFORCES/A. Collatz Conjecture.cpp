/*
    https://codeforces.com/problemset/problem/2137/A  
    O(n): YI!!
    ? | 09/01/2026
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
  int k, x;
  cin>>k>>x;
  while(k--){
    //cout << x << ", ";
    x = x*2;
  }
  cout << x << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--)solve();
  return 0;
}