#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void swap(string &s, int i, int j){
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> ss;
    vector<bool> b(n, true);
    bool flag = true;
    int count=0;
    while(r flag){
        count=0
        for(int j = n-2; j>=0; j--){
            if(b[j]){
                if(s[j] == 'A' && s[j+1] == 'B'){
                    swap(s[j], s[j+1]);
                    b[j] = false;
                } else {
                    count++;
                }
            } else {
                count++;
            }
            
            if(count == n-1){
                flag = false;
            }
        }
    }
}
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> ss;
    for(int i=0; i<n; i++){
        ss.insert(i);
    }
    int count = 0;
    bool flag = true;
    while(flag){
        for(int j=ss[ss.size()-2]; j >= 0; j--){
            count = 0;
            if(s[ss[j]]== 'A' && s[ss[j]+1] == 'B'){
                swap(s[j], s[j+1]);
                b[j] = false;
                ss.erase(ss[j])
                count --;
            } else {
                count ++;
            }

        }
        if(count >= ss.size()){
            flag = false;
        }
    }
    while(ss.size() > 1 && ss.size())
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}