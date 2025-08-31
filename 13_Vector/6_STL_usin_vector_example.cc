#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    v.push_back(6); // insert
    v.push_back(7);

    cout << "Vector Elements: ";
    for (int x : v) cout << x << " ";

    return 0;
}
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

    return 0;
}

*/