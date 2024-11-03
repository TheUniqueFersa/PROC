//Anya an 1100
#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;

//char T[MAX_N], P[MAX_N]; // T = text, P = pattern
string T;
string P = "1100", P_reverse = "1100";
int b[50], n, m = P.size(); // b = back table, n = length of T, m = length of P
int b_reverse[50];

void kmpPreprocess() { // call this before calling kmpSearch()
    int i = 0, j = -1; b[0] = -1; // starting values
    while (i < m) { // pre-process the pattern string P
        while (j >= 0 && P[i] != P[j]) j = b[j]; // if different, reset j using b
        i++; j++; // if same, advance both pointers
        b[i] = j; // observe i = 8, 9, 10, 11, 12 with j = 0, 1, 2, 3, 4
    } 
} // in the example of P = "SEVENTY SEVEN" above
void kmpPreprocessReverse(int m, const string &P, vector<int> &b_reverse) {
    int i = 0, j = -1;
    b_reverse[0] = -1;
    while (i < m) {
        while (j >= 0 && P_reverse[i] != P_reverse[j]) j = b_reverse[j];
        i++; j++;
        b_reverse[i] = j;
    }
}
int kmpSearch() { // this is similar as kmpPreprocess(), but on string T
    int i = 0, j = 0; // starting values
    int i_rev = T.size() - 1, j_rev = 0; // Variables para la búsqueda desde el final    

    while (i <= i_rev) { // El bucle se detendrá cuando los índices se encuentren o se crucen
        // Búsqueda desde el inicio
        if (i <= i_rev) {
            while (j >= 0 && T[i] != P[j]) j = b[j];
            i++; j++;
            if (j == m) {
                // Se encontró el patrón al inicio
                return 1;
            }
        }

        // Búsqueda desde el final
        if (i <= i_rev) { // Aseguramos que la búsqueda inversa no se cruce
            while (j_rev >= 0 && T[i_rev] != P[m - 1 - j_rev]) j_rev = b_reverse[j_rev];
            i_rev--; j_rev++;
            if (j_rev == m) {
                // Se encontró el patrón al final
                return 1;
            }
        }
    }

    return 0;
    
}

void solve() {
    cin >> T;
    kmpPreprocess();
    kmpPreprocessReverse();
    int q, i;
    char v;
    cin >> q;
    n = T.size(); // b = back table, n = length of T, m = length of P
    
    for(int j = 0; j < q; j++) {
        cin >> i >> v;
        T[i-1] = v;
        if(kmpSearch())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}