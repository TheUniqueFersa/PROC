/*
	https://codeforces.com/problemset/problem/1955/A
	theuniqueFersa: YI!!
	> 20 | 08/07/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

void solve(){
	int n,a,b,x,ans=0;
	cin>>n>>a>>b;
	x = min(2*a, b);
	if(n&1){
		n--;
		ans+=a;
	}
	if(n>0)
		ans+= x*(n/2);
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
