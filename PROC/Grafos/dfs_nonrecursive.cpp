    // -------------------------- [ CP4 Implementation ] --------------------------
// const int N=1000,M = 1000;
#include <iostream>
#define fori(a,b,c) for(int a = b; a<c; a++)
#define endl '\n'

using namespace std;

void solve(){
    int N,M;
    cin>>N>>M;
    char chf, chw, chv;  //char flood, char wall, char veisited
    char grid[N][M];
    //Input
    fori(i, 0, N){
        fori(j, 0, M){
            cin >> grid[i][j];
        }
    }
    // dfs
    stack<int> st;
    


}
int main(){
    solve();
    return 0;
}