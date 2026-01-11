/*
    https://codeforces.com/gym/106063/problem/A
    O(nlogn): YI!!
    77 | 11/01/2026
*/
#include <bits/stdc++.h>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
#define all(v) v.begin(),v.end()
using namespace std;

typedef vector<int> vi;
typedef long long ll;

vector<int> getDivisors(int n) {
    vector<int>divisors;
    
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            
            // If divisors are equal, print only one
            if (n / i == i) {
                divisors.push_back(i) ;
            }
            // Otherwise print both 
            else {
                divisors.push_back(i) ;
                divisors.push_back(n/i) ;
            }
        }
    }
    sort(all(divisors));
    return divisors;
}

void solve(){
  int n, sum=0;
  cin >> n;
  vi a(n);
  fori(i, 0, n){
    cin >> a[i];
    sum+=a[i];
  }
  if(sum%n == 0){
    cout << 0 << endl;
    return;
  } else {
    vi divs = getDivisors(sum);
    /*
    for(int each : divs){
      cout << each << " " ;
    }
    cout << endl;
    */
    //Como lo pondría si no quisiera el auto? #TODO
    auto it_nearest_upper_i = upper_bound(all(divs), n);
    int nearest_upper_i = it_nearest_upper_i - divs.begin();
    int nearest_lower_i = nearest_upper_i - 1; //index i of upper -1 will be nearest lower, since our number wouldn't be found by lowerbound, due to the fact the number we are looking to is lower than n
    cout << n-divs[nearest_lower_i] << endl;
  }
  
  
}
int main(){
  solve();
  return 0;
}