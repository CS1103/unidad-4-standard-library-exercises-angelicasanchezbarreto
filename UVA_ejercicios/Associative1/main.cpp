#include <iostream>
#include <cstdio>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    int numTest;
    cin >> numTest;
    getchar();
    getchar();
    while(numTest--) {
        map<string, int> arboles;
        string tree;
        int n = 0;
        while(getline(cin, tree)) {
            if(tree == "")
                break;
            arboles[tree]++;
            n++;
        }
        for(auto & arbol : arboles)
            cout << arbol.first << " " << fixed << setprecision(4) << arbol.second*100.0/n << endl;
        if(numTest)
            puts("");
    }
    return 0;
}