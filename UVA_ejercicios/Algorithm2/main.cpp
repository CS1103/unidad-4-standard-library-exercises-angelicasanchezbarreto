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
            if(tree.compare("") == 0)
                break;
            arboles[tree]++;
            n++;
        }
        for(map<string, int>::iterator i = arboles.begin(); i != arboles.end(); i++)
            cout << i->first << " " << fixed << setprecision(4) << i->second*100.0/n << endl;
        if(numTest)
            puts("");
    }
    return 0;
}