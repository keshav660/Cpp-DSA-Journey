#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    int target = 6;

    cout << "Pairs with sum " << target << ":\n";
    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            if (v[i] + v[j] == target) {
                cout << v[i] << ", " << v[j] << endl;
            }
        }
    }
    return 0;
}
