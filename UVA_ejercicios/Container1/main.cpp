#include <stdio.h>
#include <sstream>
#include <iostream>
using namespace std;

int main() {
    int t;
    string line;
    cin >> t;
    getchar();
    while(t--) {
        getchar();
        int p[5000], n = 1, i = 1;
        string x[5000];
        getline(cin, line);
        stringstream sin;
        sin << line; //agregamos line a sin
        while(sin >> p[n]) //leemos algo de sin
            n++;
        getline(cin, line);
        sin.clear();
        sin << line;
        while(sin >> x[p[i]])
            i++;
        for(i = 1; i < n; i++)
            cout << x[i] << endl;
        if(t)
            puts("");
    }
    return 0;
}