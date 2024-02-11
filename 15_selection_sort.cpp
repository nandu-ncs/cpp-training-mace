#include <iostream>
using namespace std;

int main() {
    int size, temp;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    cout << "Sorted array using selection sort: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    
    delete[] arr;

    return 0;
}
