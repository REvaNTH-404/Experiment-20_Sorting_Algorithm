# 📉 Implementation of Basic Sorting Algorithms in C++

This repository contains C++ implementations of three fundamental comparison-based sorting algorithms: **Selection Sort**, **Insertion Sort**, and **Bubble Sort**.

***

## 🏷️ Title of the Experiment
To study and implement Sorting Algorithms: Selection Sort, Insertion Sort, and Bubble Sort
***

## 🛠️ Tools Used
* **C++ Compiler:** Any C++ compiler (e.g., GCC/G++).
* **IDE/Editor:** VS Code (Visual Studio Code), or a simple text editor.
* **Online Platforms:** Online C++ environments.

***

## 💡 Theory & Algorithms

[cite_start]A **Sorting Algorithm** is used to rearrange a given array or list of elements according to a comparison operator on the elements[cite: 2380, 2381].

### 1. Selection Sort

**Theory:**
[cite_start]In **Selection Sort**, the complete array is conceptually divided into two parts: a sorted subarray (on the left) and an unsorted subarray (on the right)[cite: 2384]. [cite_start]The algorithm repeatedly finds the smallest element from the unsorted subarray and swaps it with the element at the beginning of the unsorted section[cite: 2383].

**Algorithm:**
1. Start a loop from the first element up to the second-to-last element (outer loop).
2. Initialize `min_idx` to the index of the outer loop.
3. Start a nested loop from `i + 1` to the end of the array (inner loop).
4. If an element at index `j` is smaller than the element at `min_idx`, update `min_idx = j`.
5. After the inner loop completes, swap the element at the current outer loop index (`i`) with the element at `min_idx`.
6. Repeat until the array is sorted.

***

### 2. Insertion Sort

**Theory:**
[cite_start]**Insertion Sort** works by comparing the elements with their preceding elements[cite: 2433]. [cite_start]It takes elements from the unsorted portion one by one and inserts them into their correct position within the already sorted portion of the array[cite: 2434, 2436].

**Algorithm:**
1. Start a loop from the second element (`i = 1`) to the end of the array.
2. Store the current element `arr[i]` as the `key`.
3. Initialize `j` to `i - 1`.
4. Start an inner `while` loop to shift elements: while `j` is greater than or equal to 0 AND `arr[j]` is greater than `key`, move `arr[j]` to `arr[j + 1]` and decrement `j`.
5. Insert the `key` into the correct position: `arr[j + 1] = key`.
6. Repeat until all elements are processed.

***

### 3. Bubble Sort

**Theory:**
[cite_start]**Bubble Sort** is a straightforward algorithm where adjacent elements are repeatedly compared and swapped if they are in the wrong order[cite: 2472, 2473]. [cite_start]The largest unsorted element "bubbles up" to its correct position at the end of each pass[cite: 2476].

**Algorithm:**
1. Start an outer loop from $i=0$ up to $n-2$ (where $n$ is the array size).
2. Inside the outer loop, set a `swapped` flag to `false` (for optimization).
3. Start a nested loop from $j=0$ up to $n-i-2$.
4. Compare adjacent elements: if `arr[j] > arr[j + 1]`, swap them and set `swapped = true`.
5. After the inner loop, check the `swapped` flag: if it is `false`, the array is sorted, so break the outer loop.
6. Repeat until the array is sorted.

***

## 🎯 Conclusion

This experiment provides a clear foundation for managing sorting algorithms in C++. The implementations of Selection Sort, Insertion Sort, and Bubble Sort successfully demonstrate different approaches to enforcing element order, highlighting essential array manipulation and logical control structures.
