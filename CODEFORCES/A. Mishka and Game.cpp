/*
    703/A
 - theuniqueFersa: YI!!
    timeToSolve | 02/02/2025
*/
#include <bits/stdc++.h>
using namespace std;
#define fori(a, b, n) for(int a = b; a<n; a++)
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    int m=0,c=0;
    fori(i, 0, n){
        int inc, inc2;
        cin >> inc >> inc2;
        if(inc>inc2)m++;
        else if(inc<inc2) c++;
    }
    if(m>c) cout << "Mishka" << endl;
    else if(m<c) cout << "Chris" << endl;
    else cout <<"Friendship is magic!^^"<< endl;
    
}
int main(){
    solve();
    return 0;
}