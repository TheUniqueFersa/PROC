#include <iostream>
using namespace std;
#define endl '\n'

typedef long long ll;
const int mxn = 5e5+5;

int n,q,a[mxn], p[mxn];

signed main(){
    cin >> n >> q;
    for(int i = 0; i<n; i++)
        cin >> a[i];
    
    p[0] = a[0];
    for(int i = 1; i<n; i++){
        p[i] = p[i-1] + a[i];
    }
    for(int i = 0; i< n; i++){
        cout << p[i] << " ";
    } cout << endl;
    for(int i=0; i<q; i++){
        int l, r; cin >> l >> r;
        // indexar Si los indices del problema son de 1,n
        l--; r--;
        if(l==0){
            // by definition (base case)
            cout << p[r] << endl;
        }
        else{
            cout << p[r] - p[l-1];
        }
        cout << endl;
    }

    return 0;
}