#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
const int INFTY = INT_MAX;
const int MOD = 1E9+7;

void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    
    ll pattern, sweater, sol;

    cin >> sweater >> pattern;

    if( pattern % 2 == 0 )
    {
        if( pattern > (sweater / 2) )
        {
            sol = sweater - pattern;
        }
        else
        {
            sol = sweater % pattern;
        }
    }
    else
    {
        if( pattern > (sweater / 2) )
        {
            sol = sweater - pattern;
        }
        else
        {
            // sweater -= pattern;
            // sol = sweater % (pattern*2);
            if( pattern > (sweater / 3) ){
                cout << 3 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }

    cout << sol << endl;

    return 0;
}