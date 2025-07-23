/*
    https://codeforces.com/problemset/problem/1992/A
    theuniqueFersa: YI!!
    ? < 00:30:00 | 23/07/2025
*/
#include <iostream>
#include <queue>

#define endl '\n'

using namespace std;

void solve(){
    int a,b,c;
    cin >> a>>b>>c;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    for(int i = 0; i<5; i++){
        int next;
        next = pq.top(); pq.pop();
        next++;
        pq.push(next);
    }
    int v[4];
    v[3] = 1;
    for(int i = 0; i<3; i++){
        v[i] = pq.top();
        pq.pop();
        v[3] *= v[i];
    }
    cout << v[3] << endl;

}
int main(){
    int t;
    cin >> t;
     while(t--)solve();
    return 0;
}