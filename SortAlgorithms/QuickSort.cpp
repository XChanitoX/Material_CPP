#include <iostream>
#include <vector>

using namespace std;

void QuickSort(vector<int> &array, int start, int end){
    int j = start;
    int pivot = array[end];
    for (int i = start; i < end; i++) {
        if (array[i] < pivot){
            j++;
        }else if (array[i] > pivot){
            if (i != j){
                swap(array[i], array[j]);
            }
        }
    }
}

int main(){
    vector<int> array;
    array.push_back(10);
    array.push_back(80);
    array.push_back(30);
    array.push_back(90);
    array.push_back(40);
    array.push_back(50);
    array.push_back(70);

    QuickSort(array, 0, int(array.size())-1);

    for (int i : array) {
        cout << i << " ";
    }

    return 0;
};