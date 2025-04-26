/*
    https://codeforces.com/problemset/problem/9/A
    theuniqueFersa: YI!! , PROC!!
    ? | 18/04/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

int main(){
    int a,b;
    cin >> a>>b;
    int c = 7 - max(a,b);
    if(c==6) cout << "1/1" << endl;
    else if(c==3) cout << "1/2" << endl;
    else if(c==2) cout << "1/3" << endl;
    else if(c==4) cout << "2/3" << endl;
    else cout << c << "/6" << endl;
    return 0;
}