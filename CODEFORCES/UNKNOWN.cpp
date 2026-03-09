#include <iostream>
#include <vector>
#define endl '\n'
#define fori(a,b,c)  for(int a = b; a<c; a++)
#define F first
#define S second

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
void solve(){
  int n;
  cin >> n;
  vi a(n);
  fori(i, 0, n){
    cin >> a[i];
  }
  vpii pref(n, pii());
  int firstt = a[0];
  pref[0].F = 0;
  pref[0].S = 0;
  fori(i, 1, n){
    pref[i].S = (a[i] == firstt+i)? 1:0; //1 is consecutive, 0 is not
    pref[i].F = pref[i-1].F + pref[i].S ;
  }
  
  for(auto each : pref){
    cout << each.F << " " ;
  }
  cout << endl;
  for(auto each : pref){
    cout << each.S << " " ;
  }
  cout << endl;
  int ans = 0;
  fori(i, 0, n){
    ans += pref[i].F;
  }
  cout << ans << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}