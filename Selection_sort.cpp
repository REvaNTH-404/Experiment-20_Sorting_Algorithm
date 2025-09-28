#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Assume the current element is the minimum
        int min_idx = i;
        
        // Find the index of the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Swap the found minimum element with the element at position i
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]); 
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    if (!(cin >> size) || size <= 0) {
        cout << "Invalid input. Using default size of 5." << endl;
        size = 5;
    }

    vector<int> arr(size);
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    selectionSort(arr);
    
    cout << "Sorted Array: ";
    printArray(arr);
    
    return 0;

//Enter the number of elements: 5//Enter 5 elements:
//7
//8
//4
//9
//4
//Sorted Array: 4 4 7 8 9 
}
