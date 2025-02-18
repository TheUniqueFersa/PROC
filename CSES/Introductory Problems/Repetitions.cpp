#include <iostream>
using namespace std;
#define endl '\n'

int main(){
    string s;
    cin >> s;
    char piv = s[0];
    int add = 0, res = 0;
    for(auto each : s){
        if(piv == each) ++add;
        else{
            // res = max(add, res);
            piv = each;
            add = 1;
        }
        res = max(add, res);
    }
    cout << res << endl;

    return 0;
}