    #include <bits/stdc++.h>
    #define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define ll long long
    #define F first
    #define S second
    #define PB push_back
    using namespace std;
    typedef pair<int, int> pi;
    typedef vector<int> vi;
    typedef vector<pi> vpi;
    typedef vector<vi> vii;
    typedef vector<vpi> vvpi;
     
    void solve() {
        int m[5][5];
        for(int i = 0; i<5; i++){
            for(int j = 0; j<5; j++){
                cin >> m[i][j];
                if(m[i][j] == 1){
                    cout << abs(i-2) + abs(j-2) << endl;
                    return;
                }
            }
        }
    }
     
    int main() {
        fastIo();
        solve();
    }