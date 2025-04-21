#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main(){
    string s;
    cin >> s;
    char a[26];
    int n = int(s.size());
    for(int i =0; i<26; i++) a[i] ='a'+i;
    // for(auto each : a) cout << each << " " << endl;
    int res = 0;
    for(int i = 0; i<n - 1; i++){
        int j = s[i] - 'a', jj=0;
        while(a[j] != s[i+1]){
            j++;
            jj++;
            if(j>=n) j=0;
        }
        int k = s[i] - 'a', kk=0;
        while(a[k] != s[i+1]){
            k--;
            kk++;
            if(k<0) k=n-1;
        }
        res += min(jj, kk);
        
    }
    cout << res << endl;
    return 0;
}