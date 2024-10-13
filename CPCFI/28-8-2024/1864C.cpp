#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int x;
    cin >> x;
    bitset<8> mask_bit_1("00000001"); // 1
    bitset<8> mask_bit_2("00000010"); // 2
    bitset<8> mask_bit_3("00000100"); // 4
    bitset<8> mask_bit_4("00001000"); // 8
    bitset<8> mask_bit_5("00010000"); // 16
    bitset<8> mask_bit_6("00100000"); // 32
    bitset<8> mask_bit_7("01000000"); // 64
    bitset<8> mask_bit_8("10000000"); // 128
    
    while(x>1){

    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}