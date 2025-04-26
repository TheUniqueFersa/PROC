/*
    https://codeforces.com/problemset/problem/80/A
    theuniqueFersa: YI!!
    ? | 20/04/2025
*/
#include <iostream>
#include <vector>
#include <set>
#define endl '\n'
using namespace std;

set<int> primeNumbersTill(int n){
    vector<bool> is_prime(n+1, true);
    set<int> primeNumbers;
    is_prime[0] = is_prime[1] = false;
    primeNumbers.insert(0);
    primeNumbers.insert(1);
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            // primeNumbers.insert(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for(int i = 0; i<n+1; i++){
        if(is_prime[i]) primeNumbers.insert(i);
    }
    return primeNumbers;
}

int main(){
    int n,m;
    cin >> n >> m;
    set<int> s = primeNumbersTill(n*n);
    // auto it = s.find(n);
    auto sig = next(s.find(n));
    if(*sig == m) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}