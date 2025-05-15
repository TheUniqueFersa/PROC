/*
    https://codeforces.com/problemset/problem/1873/C
    theuniqueFersa: YI!!
    <30 | 14/05/2025
*/
#include <iostream>
#define endl '\n'
using namespace std;

const int N = 10;
int matrix[N][N];
void solve(){
    int res = 0;
    for(int i = 0; i< 10 ; i++){
        for(int j =0; j<N; j++){
            char c;
            cin >> c;
            if(c == 'X')
                res+=matrix[i][j];
        }
    }
    cout << res << endl;
}
int main(){
    for(int ii = 0; ii< N/2; ii++){
        int last_index = ii + N - ii * 2;
        for(int i = ii; i< last_index; i++){
            matrix[i][ii] = ii+1;
            matrix[i][N-1-ii] = ii+1;
        }
        for(int j = ii; j< last_index; j++){
            matrix[ii][j] = ii+1;
            matrix[N-1-ii][j] = ii+1;
        }
    }
    /*
    for(int i = 0; i< N; i++){
        for(int j = 0; j<N; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
        */
        
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
