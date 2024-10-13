#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
char a[n][n];
int marks = 0;
void checkMark(int i, int j){
    if(a[i][j-1] == "#"){
        if(a[i][j+1] == "#"){
            if(a[i-1][j] == "#"){
                if(a[i+1][j] == "#"){
                    if(b[i+1][j] == false && b[i-1][j] == false && b[i][j+1] == false && b[i][j-1] == false)
                        flags++;
                }
            }    
        }

    }
    return -1;
}
void solve() {
    int n, flagEmpty=0, inc, nMarks=0;
    cin >> n;
    
    bool b[n][n];
    for(int k=0; k<n; k++){
        for(int j=0; j<n; j++){
            cin >> inc
            a[i][j] = inc;;
            b[i][j] = false;
            if(inc != '#'){
                flagEmpty = 1;
                nMarks++;
            }
        }
    }
    int nMarksPossible = nMarks/5;
    if(flagEmpty==1){
        cout << "YES";
    } else {
        int i=1, j=1, inc;
        bool flag = true;
        while(i<n-1 && flag){
            while(j<n-1 && flag){
                if(a[i][j] == "#" && b[i][j] == false)
                    checkMark(i, j);
                else if(b[i][j] == true)
                    flag = false;
                i++;
                j++;
            }
        }
        if(nMarksPossible != nMarks)
            cout << "NO";
        else 
            cout << "YES";
    }
}

int main() {
    // freopen("breedflip.in", "r", stdin);
    // freopen("breedflip.out", "w", stdout);
    fastIo();
    solve();
}