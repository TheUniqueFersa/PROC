#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool flag=false;
    if((s[s.size()-1] - '0') % 2 == 0){
        cout << 2;
        flag = true;
    }
        
    int n = s.size();
    ll sum=0;
    
    for(int i=0; i<n; i++){
        sum+= (s[i] -'0');
    }
    int three = 0;
    if(sum % 3 == 0){
        if(flag)
            cout << " ";
        cout << 3;
        flag = true;
        three = 1;
    }
    if(n>=2){
        if(((s[n-1]-'0') + (s[n-2]-'0')*10)%4==0)
        {
            if(flag)
                cout << " ";
            cout << 4;
            flag = true;
        }
    } else {
        if(s[n-1]%4==0)
        {
            if(flag)
                cout << " ";
            cout << 4;
            flag = true;
        }
    }
    
        
    if((s[s.size()-1] - '0') % 5 == 0){
        if(flag)
            cout << " ";
        cout << 5;
        flag = true;
    }
    if((s[n-1] - '0') % 2 == 0 && three==1)
    {
        if(flag)
            cout << " ";
        cout << 6;
        flag = true;
    }
    if(!flag)
        cout << -1;
    
    cout << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}   