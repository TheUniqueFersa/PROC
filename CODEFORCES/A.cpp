#include <iostream>
#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c_block = s[0];
    bool block_of_2_flag = false;
    int n_blocks = 1;
    for(int i = 1; i<n; i++){
        if(s[i] == c_block){
            if(s[i] == s[i-1])
                block_of_2_flag = true;
        } else {
            n_blocks ++;
            c_block = s[i];
        }
    }
    if(!block_of_2_flag){
        cout << n_blocks << endl;
        return;
    }
    if(s[0] == s[n-1]){
        cout << n_blocks << endl;
    } else
        cout << n_blocks + 1 << endl;

}
int main(){
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}