#include <iostream>
#include <set>

using namespace std;

int main(){

    int numDias;
    while (cin >> numDias, numDias){
        multiset<int> nums;
        int cost = 0;
        
        while (numDays--){
            int k;
            cin >> k;
            
            while (k--){
                int t;
                cin >> t;
                nums.insert(t);
            }
            
            auto menor = begin(nums);
            auto mayor = --nums.end();
            
            cost += *mayor - *menor;
            
            nums.erase(menor); 
		nums.erase(mayor);
        }
        
        cout << cost << '\n';
    }

	return 0;

}
