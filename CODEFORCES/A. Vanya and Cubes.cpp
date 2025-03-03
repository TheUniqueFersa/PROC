/*
    https://codeforces.com/problemset/problem/492/A
 - theuniqueFersa: YI!!
    ? | 25/2/2025
*/
#include <iostream>
#define fori(a,b,c) for(int a= b; a<c; a++)
using namespace std;
#define endl '\n'

int main(){
    int n;
    cin >> n;
    int sum = 0, res = 0, i=1;
    while(true){
        int s = i*(i+1)/2;
        if(sum + s <= n){
            sum+=s;
            res++;
        }
        else break;
        i++;
    }
    cout << res << endl;
    return 0;
}