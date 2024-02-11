#include <iostream>
using namespace std;

int main() {
    int size, target;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Enter " << size << " sorted elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    cout << "Enter the target element to search: ";
    cin >> target;
    
    int low = 0;
    int high = size - 1;
    int index = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if (index != -1) {
        cout << "Element found at index: " << index;
    } else {
        cout << "Element not found in the array.";
    }
    
    delete[] arr;
    
    return 0;
}
