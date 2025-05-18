/*
    https://codeforces.com/problemset/problem/702/A
    theuniqueFersa: YI!!
    <10 | 17/05/2025
*/
#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    int n;

    cin >> n;
    int cnt = 1, prev, mx_cnt=1;
    cin >> prev;
    for(int i =1; i<n; i++){
        int inc ;
        cin >> inc;
        if(inc> prev) cnt ++;
        else{
            mx_cnt = max(mx_cnt , cnt);
            cnt = 1;
        }
        prev = inc;
    }
    if(cnt>1) mx_cnt = max(mx_cnt , cnt);
    cout << mx_cnt;
    return 0;
}