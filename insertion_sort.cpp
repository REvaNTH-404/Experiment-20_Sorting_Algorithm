
#include <iostream>
#include <vector>

using namespace std;

// Function to perform Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        // 'key' is the element to be inserted into the sorted subarray
        int key = arr[i];
        int j = i - 1;

        // Move elements of the sorted subarray that are greater than 'key' 
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the key into its correct position
        arr[j + 1] = key;
    }
}

void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Using a vector for a fixed example array, similar to the original logic
    vector<int> arr = {64, 25, 12, 22, 11};
    
    cout << "Original array: ";
    printArray(arr);
    
    insertionSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);
    
    return 0;

  //output
//Original array: 64 25 12 22 11 
//Sorted array: 11 12 22 25 64 
}
