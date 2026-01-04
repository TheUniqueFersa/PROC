/*
  https://codeforces.com/problemset/problem/1472/A   
  O(n): YI!!
  :) | 04/01/2025
*/
#include <iostream>
#include <cmath>
#define endl '\n'

using namespace std;
int n2(int x){
  int i = 0;
  while(!(x&1)){
    i++;
    x/=2;
  }
  //cout << i << endl;
  return i;
}
void solve(){
  int w,h,n;
  cin>>w>>h>>n;
  if((w & 1) && (h&1)){
    if(n == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
  } else {
    int x,y;
    x = (w&1)? 1:pow(2, n2(w));
    y = (h&1)? 1:pow(2, n2(h));
    if(x*y >= n) cout << "YES" << endl;
    else cout << "NO" << endl;
    //cout << x*y << endl;
  }
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}