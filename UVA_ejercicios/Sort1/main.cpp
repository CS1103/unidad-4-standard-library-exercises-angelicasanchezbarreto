#include <iostream>

using namespace std;

int main() {
    int numTest, L, train[50];
    cin>>numTest;
    while(numTest--){
        cin>>L;
        for(int i=0; i<L; i++){
            cin>>train[i];
        }
        int swaps = 0;
        for(int j=0; j<L; j++){
            for(int k=0; k<L-1; k++){
                if(train[k+1]<train[k]){
                    int temp = train[k];
                    train[k] = train[k+1];
                    train[k+1] = temp;
                    swaps++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swaps << " swaps";
    }
    return 0;
}