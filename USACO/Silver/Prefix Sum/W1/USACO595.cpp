/*
    O(n) YI
    ? | 03-10-2025
*/
#include <bits/stdc++.h>
#define endl '\n'
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define fori(a,b,c) for(int a = b; a<c; a++)
#define PB push_back
using namespace std;
typedef long long ll;

void solve(){

    ifstream cin("div7.in");
    //use read instead of cin

    ofstream cout("div7.out");
    //use out instead of cout

    ll n;
    cin >> n;

    vector<ll> cows(n);
    vector<ll> prefix(n);
    cin >> cows[0];
    prefix[0] = cows[0] % 7;
    fori(i, 1, n){
        cin >> cows[i];
        prefix[i] = (prefix[i-1] + cows[i]) % 7;
    }
    vector<int> lastFound(7, -1);
    int maxi = 0;
    fori(i, 0, n){
        if(lastFound[prefix[i]] == -1) lastFound[prefix[i]] = i;
        else{
            maxi = max(i - lastFound[prefix[i]], maxi); //cumple con el rango de Sum([arr[a+1],arr[b]])
        }
    }
    cout << maxi << endl;



}
int main(){
    solve();
    return 0;
}