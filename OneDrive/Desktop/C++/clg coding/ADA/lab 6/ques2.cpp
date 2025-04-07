#include <iostream>
#include <algorithm>
using namespace std;

// Function to find median of three elements
int medianOfThree(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    int a = arr[low];
    int b = arr[mid];
    int c = arr[high];
    
    // Find median
    if ((a - b) * (c - a) >= 0)
        return low;
    else if ((b - a) * (c - b) >= 0)
        return mid;
    else
        return high;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivotIndex = medianOfThree(arr, low, high); // Choose median of three as pivot
    int pivot = arr[pivotIndex];
    swap(arr[pivotIndex], arr[high]);
    
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    cout << "Original array: ";
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
