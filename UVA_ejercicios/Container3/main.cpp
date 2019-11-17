#include<cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int num, othernum;
    while (scanf("%d", &num) == 1) {
        othernum = num;
        char * bits = (char*) &othernum;
        swap(bits[0], bits[3]), swap(bits[1], bits[2]);
        cout << num << " converts to " << othernum << endl;
    }
    return 0;
}