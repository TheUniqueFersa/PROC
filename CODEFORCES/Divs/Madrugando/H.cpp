#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef __int128 sll;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(a) (int)a.size()
#define fori(i,a,n) for(int i = a; i < n; i++)
const int MOD = 1e9+7;
const int INFTY = INT_MAX;
const long long LLINF = LLONG_MAX;
const double EPS = 10e-9;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve( string str )
{
    set<string> sol;
    char first = str[0];
    int idx = 0;

    fori(i,1,(sz(str)))
    {
        if( ! (str[i] < first) && sol.count( str.substr(idx, i-idx ) ) == 0 )
        {
            if(!sol.empty())
            {
                auto last = sol.end();
                last--;
                cout << "last: " << *last << ", " << str.substr(idx, i-idx ) << endl;
                if(str.substr(idx, i-idx ) < *last)
                {
                    string s = *last;
                    s+=str.substr(idx, i-idx );
                    sol.erase( last );
                    sol.insert( s );
                }
                
            } else {
                sol.insert( str.substr(idx, i-idx ) );
                first = str[i];
                idx = i;
            }
        }
    }
    sol.insert( str.substr(idx, sz(str)-idx ) );

    cout << sz(sol) << endl;
    for( string solElem : sol )
    {
        cout << solElem << endl;
    }
}

int main()
{
    fastIO();
    
    string str;

    cin >> str;

    solve( str );
    
    return 0;
}