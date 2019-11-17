#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct {
    string data;
    int sort;
    int id;
} dna;


int checkSort(string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        for(int j = i; j < str.length(); j++) {
            if (str[i] > str[j]) {
                count++;
            }
        }
    }
    return count;
}


bool cmp(dna &a, dna &b){
    if(a.sort == b.sort)
        return a.id < b.id;
    return a.sort < b.sort;
}


int main(){
    int M;
    string line;
    while(cin >> M){
        while(M--){
            getline(cin, line);
            int n, m;
            cin >> n >> m;

            vector<dna> dnas;
            dna da;
            string datos;

            for(int i = 0; i < m; i++){
                da.id = i;
                cin >> datos;
                da.data = datos;

                da.sort = checkSort(da.data);
                dnas.push_back(da);
            }

            sort(dnas.begin(), dnas.end(), cmp);

            for(int i = 0; i <= dnas.size()-1; i++){
                cout << dnas[i].data << endl;
            }

            if(M > 0){
                cout << endl;
            }
        }

    }

    return 0;
}