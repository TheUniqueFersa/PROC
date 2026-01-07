/*
    https://codeforces.com/problemset/problem/1877/A
    O(n): YI!!
    58 | 07/01/2026
*/
#include <iostream>
#define endl '\n'

using namespace std;
void solve(){
  int n, sum=0;
  cin >> n;
  for(int i = 0; i< n-1; i++){
    int inc;
    cin >> inc;
    sum += - inc;
  }
  cout << sum << endl;

}
int main(){
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}