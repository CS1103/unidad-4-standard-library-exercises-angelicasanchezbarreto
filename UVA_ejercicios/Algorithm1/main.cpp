#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;

    while(cin>>s, s!= "#") {
        if (next_permutation(s.begin(), s.end())) {
            cout << s;
        } else {
            cout << "No Successor";
        }
    }
    return 0;
}