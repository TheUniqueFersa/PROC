/*
    https://open.kattis.com/problems/basketballoneonone
    YI!!
    ? | 30-09-2025
*/
#include <iostream>
#include <map>
#define endl '\n'
using namespace std;

void solve(){
    //string s;
    //cin >> s;
    /*
    int n = (int)s.size();
    for(int i = 0; i<n; i+=2){
        
    }
    */
    map<char, int> m = {{'A', 0},{'B', 0}};
    char player, points, res;
    bool flag = false, done = false;
    while(scanf("%c%c", &player, &points)>1){
        m[player]+= points-'0';
        if(m['A'] == 10 && m['B'] == 10) flag = true;
        if(flag){
            if(abs(m['A']-m['B']) >= 2 && !done) {
                res = player;
                done = true;
            }
        } else{
            if(m[player] >= 11 && !done){
                res = player;
                done = true;
            }
        }
    }
    cout << res << endl;
}
int main(){
    solve();
    return 0;
}