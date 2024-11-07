// G. Moving Ships: Propedeutico Lunes Outsolving
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
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int i=0,j=n-1, res=0, first=-1, last=-1;
    while(i<j){
        if(a[i] == 1 && first == -1)
            first = i;
        if(a[j] == 1 && last == -1)
            last = j;
        i++;
        j--;
    }
    if(first == -1 || first == last){
        cout << 0 << endl;
        return;
    }
    for(int k=first; k<=last; k++){
        if(a[k] == 0)
            res++;
    }
    cout << res << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}