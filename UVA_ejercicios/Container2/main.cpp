#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int N, K, c[258], p;
    char ch;
    cin >> N;
    while(N-- && scanf("%d\n", &K)==1) {
        memset(c, 0, sizeof c);
        while (K-- && scanf("%c %d\n", &ch, &p)==2) c[ch + 128] = p;
        scanf("%d\n", &K);
        while (K--) while ((ch = getchar()) != '\n')
                c[257] += c[ch + 128];
        cout << c[257] / 100 << "." << c[257] % 100 <<"$";
    }
    return 0;
}