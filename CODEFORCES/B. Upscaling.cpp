/*
    https://codeforces.com/problemset/problem/1950/B
    O(n^2): YI!!
    < 20 | 27-02-2026
*/
#include <iostream>
#define endl '\n'
#define fori(a,b,c) for(int a = b; a<c; a++)
using namespace std;

void solve(){
    int n;
    cin >> n;
    fori(i, 0, n){
        if(!(i & 1)){
            fori(j, 0, n){
                if(j & 1){
                    cout << "..";
                } else{
                    cout << "##";
                }
            }
            cout << endl;
            fori(j, 0, n){
                if(j & 1){
                    cout << "..";
                }  else{
                    cout << "##";
                }
            }
            cout << endl;
        } else {
            fori(j, 0, n){
                if(j & 1){
                    cout << "##";
                } else{
                    cout << "..";
                }
            }
            cout << endl;
            fori(j, 0, n){
                if(j & 1){
                    cout << "##";
                }  else{
                    cout << "..";
                }
            }
            cout << endl;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    //cout << 0 % 
    return 0;
}
