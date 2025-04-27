#include <bits/stdc++.h>
using namespace std;
//Distintas implemetnaciones

// Recursive
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}

// Iterative
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

// Binary GCD
int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}