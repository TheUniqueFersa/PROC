#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <algorithm>
 
void solve() {
    int n, m, x, y, d=0;
    char p;
    cin >> n;
    cin >> m;
    cin >> p;
    bool bandera = true;
    vector<vector<char>> o(n,vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> o[i][j];
            if(o[i][j] == p && bandera){
                x = i;
                y=j;
                bandera = false;
            }
        }
    }
    int len=count(o[x].begin(), o[x].end(), p);
    int yl = y+(len-1);
    int emptyUp=0, emptyDown=0;
    if(x!=0){
        emptyUp = count(o[x-1].begin()+y, o[x-1].begin()+y+(len-1), '.');
        cout << 0+y << ' ' << 0+y+(len-1) <<'\n';
    }
    if(x<n){
        emptyUp = count(o[x+1].begin()+y, o[x+1].begin()+y+(len-1), '.');
    }

    if(y!=0){
        if(o[x][y-1] != '.')
            d++;
    }
    if(y<m){
        if(o[x][yl+1] != '.')
            d++;
    }
    if(emptyUp != len)
        d++;
    if(emptyDown != len)
        d++;

    cout << d;
}
 
int main() {
    fastIo();
    solve();
}