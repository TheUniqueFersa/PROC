#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    string s;
    map<string, int> m;
    queue<int> q;
    int n, max=0, np;
    for(int i = 0; i<n; i++){
        cin >> s;
        cin >> n;
        
        if(m.find(s) != m.end()){
            m[s] += n;
            np = m[s];
        } else {
            m.insert({m, n});
            np = n;
        }
        if(np>max){
            while (!s.empty())
            {
                s.pop();
            }
            max = np;
            q.push(s);
        } else if(np == max){
            q.push(s);
        }


    }
    cout << q.front();
}

int main() {
    fastIo();
    solve();
}