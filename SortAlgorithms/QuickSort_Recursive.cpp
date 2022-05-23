#include <iostream>

using namespace std;

void changeValues(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int start, int end){
    int pivot = array[end];
    int first = start - 1;

    for (int i = start; i <= end - 1; i++) {
        if (array[i] <= pivot){
            first++;
            changeValues(&array[first], &array[i]);
        }
    }
    changeValues(&array[first + 1], &array[end]);
    return first + 1;
}

void QuickSort(int array[], int start, int end){
    if (start < end){
        int pivot = partition(array, start, end);
        QuickSort(array, start, pivot-1);
        QuickSort(array, pivot+1, end);
    }
}

void PrintArray(int array[], int size){
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

int main(){
    //Initial array to be sorted
    int array[] = { 10, 80, 30, 90, 40, 50, 70};
    //Number of elements of the array
    int size = sizeof(array)/sizeof(array[0]);
    //Function to sort the array
    QuickSort(array, 0, size-1);
    //Print the array elements
    PrintArray(array, size);
    return 0;
}
