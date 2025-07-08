/*
	https://codeforces.com/problemset/problem/1858/A
	theuniqueFersa: YI!!
	10 < | 30/06/2025
*/
#include <iostream>
using namespace std;
#define endl '\n'
void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	if(c&1) a++;
	if(a>b) cout << "First" << endl;
	else cout << "Second" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
