#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Choose random pivot index
    int pivotIndex = low + rand() % (high - low + 1);
    int pivot = arr[pivotIndex];
    // Move pivot element to the end
    swap(arr[pivotIndex], arr[high]);
    
    int i = low - 1; // Index of smaller element
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // Swap pivot element to its correct position
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index
        
        // Recursively sort elements before partition and after partition
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
    
    srand(time(nullptr)); // Seed for random number generation
    
    quickSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
