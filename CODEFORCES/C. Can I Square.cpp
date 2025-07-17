/*
	https://codeforces.com/problemset/problem/1915/C
	theuniqueFersa: YI!!
	? | 03/07/2025
*/
#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
typedef long long ll;
void solve(){
	int n;
	ll sum=0;
	cin >> n;
	for(int i = 0; i<n; i++){
		int inc;
		cin >> inc;
		sum+=(ll)inc;
	}
	ll a=sqrt(sum);
	if(a*a == sum) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}

