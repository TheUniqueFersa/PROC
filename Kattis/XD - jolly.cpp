#include <iostream>
#include <bitset>
#include <sstream>
#include <vector>
#define sz(a) (int)a.size()
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)
using namespace std;
#define MAX_N 3000+1
void solve(string linea){
    bitset<MAX_N> b;
    stringstream ss(linea);
    vector<int> v;
    int inc;
    while(ss >> inc){
        v.push_back(inc);
    }
    int n = sz(v);
    bitset<MAX_N> mask;
    fori(i, 1, n-1){
        mask.set(i);
    }
    if(n == 1){
        cout << "Jolly" << endl;
    } else {
        int ant = v[0];
        fori(i, 1, n){
            int num = abs(ant - v[i]);
            b.set(num);
            ant = v[i];
        }
        cout << b << endl;
        cout << mask << endl;
        if((b & mask) == mask) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
}
int main(){
    string linea;
    while(getline(cin, linea)){
        solve(linea);
    }
    return 0;
}