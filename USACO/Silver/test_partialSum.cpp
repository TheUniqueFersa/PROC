#include <bits/stdc++.h>
using namespace std;
#define in(v) for(auto &x : v) cin >> x;
#define endl '\n'
#define out(v) for(auto x : v) cout << x << " "; cout<<endl;
#define sz(v) (int)size(v)
#define all(v) begin(v),end(v)

typedef long long ll;
const int mxn = 5e5+5;

//int n,q,a[mxn], p[mxn];
typedef vector<int> vi;

void printVector(vi & a){
    for(auto each : a){
        cout << each << " ";
    }
    cout << endl;
}
vi partSum(vi& a){
    //se crea un vector de 1 localidad más grande
    vi psum(sz(a)+1);
    for(int i = 0; i<sz(a); ++i){
        //psum[i+1] = psum[i]+a[i];   
    }
    partial_sum(begin(a), end(a), begin(psum)+1); // deja la primera localidad en cero
    //partial_sum(begin(a), end(a), begin(psum));
    return psum;
}

signed main(){
    int n,q;
    cin >> n >> q;
    vi a(n), p(n);
    //vi a(n), p(n+1);//0 al principio de p (1 más grande de tamaño)
    in(a);
    partial_sum(all(a), begin(p));
    //partial_sum(all(a), begin(p)+1);//0 al principio de p (1 más grande de tamaño)
    out(p);

    return 0;
}