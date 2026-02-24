/*
    https://open.kattis.com/problems/jollyjumpers
    O(n): YI!!
    XD | 23/02/2026
*/
// naive solution XD O(n)
#include <iostream>
#include <sstream>
#include <vector>
#define endl '\n'
#define fori(a,b,c) for(int a=b; a<c; a++)

using namespace std;
void solve(string s){
    stringstream ss(s);
    int n;
    ss >> n;
    vector<bool> b(n+1, 0);
    vector<int> v(n);
    /*
        the secret is that a jollyjumper requires [1, n-1] that is: n-1 
        elements, so if bool[i] is already 1, it's impossible to reach 
        the n-1 elements, because we hace one repeated, so the condition
        reduces itself to only check if bool[i] is turned off and
        if the number = abs(ant - act) is between the range [1,n-1]
    */
    fori(i, 0, n){
        ss >> v[i];
    }
    if(n==1){
        cout << "Jolly" << endl;
    } else {
        int ant = v[0];
        fori(i, 1, n){
            int num = abs(ant - v[i]); 
            if(b[num] || (num > n-1)){
                cout << "Not jolly" << endl;
                return;
            } 
            b[num] = 1;
            ant = v[i];
        }
        cout << "Jolly" << endl;
    }
}
int main(){
    string s;
    while(getline(cin, s)){
        solve(s);
    }
    return 0;
}