/*
    https://codeforces.com/problemset/problem/2034/A
    O(n): YI!!
    60 | 10/01/2026
*/
#include <iostream>
#define endl '\n'

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void solve(){
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}