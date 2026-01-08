/*
    https://codeforces.com/problemset/problem/1368/A
    O(n): YI!!
    < 6 | 08/01/2026
*/
#include <iostream>
#define endl '\n'

using namespace std;

int ntimes(int a, int b, int n){
  int t = 0;
  while((a<=n)&&(b<=n)){
    if(a<b){
      a = a+b;
    } else {
      b = a+b;
    }
    t++;
  }
  return t;
}

void solve(){
  int a,b,n;
  cin>>a>>b>>n;
  cout << ntimes(a,b,n) << endl;

}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}