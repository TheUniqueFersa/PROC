#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int turn = 0, min;
    
    while(a.size()>0){
        if(turn){
            turn = 0;
        } else {
            turn = 1;
        }
        min = a[0];
        for(int i=0; i<a.size(); i++){
            if(a.size()>1)
                a[i] -= 1;
            else
                a[i] -= min;
        }
        bool flag = true;
        min = a[0];
        while(min<=0 && flag){
            a.erase(a.begin());
            if(a.size() > 0)
                min=a[0];
            else
                flag = false;
        }
        cout << "t" << turn << '\n';
        for(auto each : a){
            cout << each << " ";
        }
        cout << '\n';
    }
    cout << turn;
    if(turn){
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}