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
        ll As = (2*l)*(2*l);
        ll A = As;
        for(ll i = 1; i < n; i++){
            ll tmp = As - (2*l - k)*(2*l - k);
            A = A + tmp;
        }
        return A;
    }else{
        return n*(2*l)*(2*l); 
    }
}

int main() {
    fastIo();
    cout << solve();
}