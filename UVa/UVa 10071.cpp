#include <iostream>
#define endl '\n'
#include <sstream>

using namespace std;
void solve(){
    string s;
    int v, t;
    while(getline(cin, s)){
        stringstream ss(s);

        ss >> v >> t;
        cout << v * 2 * t << endl;
    }
}
int main(){
    solve();
    return 0;
}