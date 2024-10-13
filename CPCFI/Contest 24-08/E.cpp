#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void solve() {
    int C, K, Q;
    cin >> C;
    cin >> K;
    char m[C+1][K+2], inc;
    pair<int, int> E;
    for(int i=0; i<C+2; i++){
        for(int j=0; j<K+2; j++){
            if(i==0 || i==C+1 || j == 0 || j ==K+1)
                m[i][j] = '#';
            else { 
                cin >> inc;
                if(inc == 'E'){
                    E = {i, j};
                }
                m[i][j] = inc;
            }
        }
    }
    int i, j, n;
    char t;
    cin >> Q;
    for(int k=0; k<Q; k++){
        cin >> i;
        cin >> j;
        t = m[i][j];
        if(t == '#'){
            cout << 'W';
        }
        if(t == 'X'){
            cout << 'X';
        }
        if(t == 'E'){
            cout << 'E';
        }
        if(t == '.'){
            if(m[i+1][j] == '#' && m[i-1][j] == '#' && m[i][j+1] == '#' && m[i][j-1] == '#' && m[i+1][j+1] == '#' && m[i+1][j-1] == '#' && m[i-1][j+1] == '#' && m[i-1][j-1] == '#'){
                cout << '?';
            } else {
                int moves[4] = {C*K, C*K, C*K, C*K};
//                cout << E.first << " " << E.second;
                if(E.first < i && m[i-1][j] != '#' && m[i-1][j] != 'X'){
                    moves[2] = abs(E.first - i);
                    
                } else if(E.first > i && m[i+1][j] != '#' && m[i+1][j] != 'X'){
                    moves[1] = abs(E.first - i);
                    
                }
                if(E.second < j && m[i][j-1] != '#' && m[i][j-1] != 'X'){
                    moves[0] = abs(E.second - j);
                    
                } else if(E.second > j && m[i][j+1] != '#' && m[i][j+1] != 'X'){
                    moves[3] = abs(E.second - j);
                    
                }
                n=0;
                
                for(int p=0, ni; p<4; p++){
                    if(moves[p] < moves[n]){
                        n = p;
                    }
                        
                }
                if(moves[0] == C*K && moves[1] == C*K && moves[2] == C*K && moves[3] == C*K){
                    cout << '?';
                } else {
                    switch(n){
                        case 0:
                        cout << 'L';
                            break;
                        case 1:
                        cout << 'D';
                            break;
                        case 2:
                        cout << 'U';
                            break;
                        case 3:
                        cout << 'R';
                            break;
                    }
                }

            }
        }
        cout << '\n';
    }
}

int main() {
    fastIo();
    solve();
}   