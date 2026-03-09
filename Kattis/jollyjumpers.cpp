#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#define endl '\n'
#define sz(a) (int)(a.size())
#define fori(a,b,c) for(int a = b; a<c; a++)

using namespace std;
void solve(string linea){
    stringstream ss(linea);
    int inc;
    vector<int> v;
    while(ss >> inc){
        v.push_back(inc);
    }
    int n = sz(v);
    vector<bool> b(n+1);
    if(n == 1){
        cout << "Jolly" << endl;
    } else {
        int ant = v[0];
        fori(i, 1, n){
            int num = abs(ant - v[i]);
            b[num]
            ant = v[i];
        }
    }
    
}
int main(){
    string linea;
    while(getline(cin, linea)){
        solve(linea);
    }
    return 0;
}