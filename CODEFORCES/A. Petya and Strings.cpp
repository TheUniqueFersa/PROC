//A. Petya and Strings
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve(){
    string s, s2;
    cin >> s >> s2;
    int sum=0, sum2=0;
    for(int i = 0; i<s.length(); i++){
        if(tolower(s[i]) != tolower(s2[i])){
            if(tolower(s[i]) < tolower(s2[i])) cout << "-1";
            else cout << "1";
            return;
        }        
    }
    cout<<"0";
    
}
int main(){
    solve();
}


