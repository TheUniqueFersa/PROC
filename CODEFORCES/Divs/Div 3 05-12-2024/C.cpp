#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define F first
#define S second
#define PB push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)(a.size())
#define fori(i,a,n) for(int i = a; i < n; i++)
#define endl '\n'
const int MOD = 1e9+7;
const int INF = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 1e-9;

void setIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
vi nines;
void solve() {
    map<int, int> m;
    m[2] = 0;
    m[3] = 0;

    string s;
    cin >> s;
    int n = s.size(), sum=0;
    fori(i,0,n){
        sum += s[i]-'0';
        if(s[i] == '2'){
            m[2]++;
        } else if(s[i] == '3'){
            m[3]++;
        }
    }
    if(sum%9 == 0){
        cout << "YES" << endl;
        return;
    }
    // cout << m[2] << " " << m[3] << endl;
    auto a_nearest = upper_bound(all(nines), sum);
    int nearest = a_nearest - nines.begin();
    int dif = abs(nines[nearest] - sum);
    // cout << dif << endl;
    if(dif %2 == 1){
        int i = nearest;
        while((m[2]*2 + m[3]*6) >= nines[i] ){
            dif = abs(nines[i] - sum);
            if(dif == 6){
                if(m[3] >= 1 || m[2] >= 3){
                    cout << "YES" << endl;
                    return;
                } else {
                    cout << "NO" << endl;
                    return;
                }   
            } else if(dif==8){
                if((m[3] >= 1 && m[2] >= 1) || m[2] >= 4){
                    cout << "YES" << endl;
                    return;
                } else {
                    cout << "NO" << endl;
                    return;
                }
            } else {
                if(m[2] >= dif/2){
                    cout << "YES" << endl;
                    return;
                }
                else {
                    cout << "NO" << endl;
                    return;
                }
            }
        }

        cout << "NO" << endl;
        return;
    } else {
        if(dif == 6){
            if(m[3] >= 1 || m[2] >= 3){
                cout << "YES" << endl;
                return;
            } else {
                cout << "NO" << endl;
                return;
            }   
        } else if(dif==8){
            if((m[3] >= 1 && m[2] >= 1) || m[2] >= 4){
                cout << "YES" << endl;
                return;
            } else {
                cout << "NO" << endl;
                return;
            }
        } else {
            if(m[2] >= dif/2){
                cout << "YES" << endl;
                return;
            }
            else {
                cout << "NO" << endl;
                return;
            }
        }
    }
}

int main() {
    fastIO();
//    setIO();
    int t;
    cin >> t;
    int v=9, i=2;
    while(v <= 9e5){
        nines.PB(v);
        v = 9*i;
        i++;
    }
    // cout << nines.size() << endl;
    while( t-- ) solve();
    return 0;
}