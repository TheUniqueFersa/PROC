#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; scanf("%d\n", &N);
    while(N--){
        char x[110];
        scanf("0.%[0-9]...\n", &x); //& optional?
        printf("0.%s\n", x);
    }
    return 0;
}
/*
3
0.1227...
0.517611738...
0.7341231223444344389923899277...
*/