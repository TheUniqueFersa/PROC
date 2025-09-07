/*
    https://codeforces.com/problemset/problem/935/A
    ODENE
    < 20 | 07-09-2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n, res = 0;
    while(--m)
        if(m%(n-m)  == 0) res++;
    cout << res << endl;
    return 0;
}