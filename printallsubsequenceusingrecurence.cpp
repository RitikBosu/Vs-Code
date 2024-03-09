// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void print(const vector<int>& ds) {
//     for (auto x : ds) {
//         cout << x << " ";
//     }
//     cout << endl;
// }

// void backtrack(int i, vector<int>& arr, vector<int>& ds, int n) {
//     if (i == n) {
//         print(ds);
//         return;
//     }

//     // make the choice
//     ds.push_back(arr[i]);
//     backtrack(i + 1, arr, ds, n);

//     // undo the choice
//     ds.pop_back();
//     backtrack(i + 1, arr, ds, n);
// }

// int main() {
//     vector<int> arr = {1, 2, 3};
//     vector<int> ds;
//     int n = arr.size();

//     backtrack(0, arr, ds, n);

//     return 0;
// }
// //number of subsequence part
// int count = 0; // initialize a counter variable

// void backtrack(int i, vector<int>& arr, vector<int>& ds, int n) {
//     if (i == n) {
//         count++; // increment the counter when a valid subsequence is found
//         return;
//     }
//     // make the choice
//     ds.push_back(arr[i]);
//     backtrack(i + 1, arr, ds, n);

//     // undo the choice
//     ds.pop_back();
//     backtrack(i + 1, arr, ds, n);
// }
// int main() {
//     vector<int> arr = {1, 2, 3};
//     vector<int> ds;
//     int n = arr.size();
//     backtrack(0, arr, ds, n);
//     cout << "Number of subsequences: " << count << endl;
//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;
// void heapify(vector<int>& arr, int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     if (left < n && arr[left] > arr[largest])
//         largest = left;
//     if (right < n && arr[right] > arr[largest])
//         largest = right;
//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
// void heapSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
//     for (int i = n - 1; i >= 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }
// void printArray(vector<int>& arr) {
//     for (int i = 0; i < arr.size(); ++i)
//         cout << arr[i] << " ";
//     cout << "\n";
// }
// int main() {
//     vector<int> arr = {12, 11, 13, 5, 6, 7};
//     cout << "Original array: ";
//     printArray(arr);

//     heapSort(arr);

//     cout << "Sorted array: ";
//     printArray(arr);

//     return 0;
// }
// void decrease(int i, int x){
//     arr[i]=x;
//     while (i!=(0)) and arr[i] <arr[parent]){
//         swap (arr[i], arr(parent[i]));
//         i=parent(i);
//     }
// }
// [10:37, 07/02/2024] Pratyush Pothal Cse: #include <iostream>
// #include <vector>
// using namespace std;

// // Function to heapify a subtree rooted at index i in a min-heap
// void minHeapify(vector<int>& arr, int n, int i) {
//     int smallest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] < arr[smallest])
//         smallest = left;

//     if (right < n && arr[right] < arr[smallest])
//         smallest = right;

//     if (smallest != i) {
//         swap(arr[i], arr[smallest]);
//         minHeapify(arr, n, smallest);
//     }
// }

// // Function to build a min-heap from the given array
// void buildMinHeap(vector<int>& arr, int n) {
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         minHeapify(arr, n, i);
//     }
// }

// // Function to heapify a subtree rooted at index i in a max-heap
// void maxHeapify(vector<int>& arr, int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         maxHeapify(arr, n, largest);
//     }
// }

// // Function to build a max-heap from the given array
// void buildMaxHeap(vector<int>& arr, int n) {
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         maxHeapify(arr, n, i);
//     }
// }

// int main() {
//     vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
//     int n = arr.size();

//     // Build Min Heap
//     buildMinHeap(arr, n);
//     cout << "Min Heap: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Build Max Heap
//     buildMaxHeap(arr, n);
//     cout << "Max Heap: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted at index i in a min-heap
void minHeapify(vector<int>& arr, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

// Function to build a min-heap from the given array
void buildMinHeap(vector<int>& arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

// Function to heapify a subtree rooted at index i in a max-heap
void maxHeapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Function to build a max-heap from the given array
void buildMaxHeap(vector<int>& arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

int main() {
    vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
    int n = arr.size();

    // Build Min Heap
    buildMinHeap(arr, n);
    cout << "Min Heap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Build Max Heap
    buildMaxHeap(arr, n);
    cout << "Max Heap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
