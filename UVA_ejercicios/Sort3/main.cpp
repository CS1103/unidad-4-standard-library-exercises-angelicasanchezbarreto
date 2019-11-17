
#include <cstdio>
#include <iostream>

using namespace std;

int sort(int left, int right, int* a, int* b) {
    if (right - left == 1)
        return 0;

    int middle = (left + right) / 2;

    int ans = sort(left, middle, a, b) + sort(middle, right, a, b);
    int p = left, q = middle, c = left;
    while (p < middle || q < right) {
        if (q >= right || (p < middle &&  a[p] <= a[q])) b[c++] = a[p++];
        else {
            ans += middle - p;
            b[c++] = a[q++];
        }
    }
    for (int i = left; i < right; i++) a[i] = b[i];
    return ans;
}


const int N = 50000;
int n, g[N], f[N];

int main() {
    while (scanf("%d", &n) == 1 && n) {
        for (int i = 0; i < n; i++)
            cout << g[i];

        printf("%d\n", sort(0, n, g, f));
    }
    return 0;
}
