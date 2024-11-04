#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
#include <iostream>

using namespace std;

ll solve(){
    ll n, k, l;
    cin >> n ;
    cin >> k ;
    cin >> l ;
    if(n==1){
        return (2*l)*(2*l);
    }
    if(l>=k-1){//intersecta
        ll x1, x2, a;
        x1= -l;
        x2= ((n-1)*(k))+l;
        a = (x2-x1)*(x2-x1);
        return a-2*(((n*(n-1))/2)*k*k);
    }else{
        return n*(2*l)*(2*l); 
    }
}

int main() {
    fastIo();
    cout << solve();
}