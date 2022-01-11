#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> array;
    array.push_back(40);
    array.push_back(30);
    array.push_back(10);
    array.push_back(20);
    array.push_back(60);

    for (int i : array) {
        cout << i << ", ";
    }

    return 0;
};