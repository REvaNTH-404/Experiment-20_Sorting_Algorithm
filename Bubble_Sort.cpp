#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

using namespace std;

// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop controls the number of passes
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        // Inner loop performs comparisons and swaps. 
        // Elements from (n - i - 1) to n are already in place.
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Optimization: If no two elements were swapped by inner loop, the array is sorted
        if (!swapped) {
            break;
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
    int elements;
    cout << "How many elements in the array? :";
    if (!(cin >> elements) || elements <= 0) {
        cout << "Invalid input. Using default size of 5." << endl;
        elements = 5;
    }

    vector<int> arr(elements);
    cout << "Enter elements: ";
    for (int i = 0; i < elements; ++i) {
        cin >> arr[i];
    }
    
    cout << "Original array: ";
    printArray(arr);

    bubbleSort(arr);
    
    cout << "Sorted array is:" << endl;
    printArray(arr);
    
    return 0;
}
