//this one is correct by bard gimini
#include <iostream>
using namespace std;

// Partition function to rearrange the array around the pivot
int partition(int *arr, int low, int high) {
    int pivot = arr[low];  // Choose the first element (low) as pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;    // Increment index of smaller element
            swap(arr[i], arr[j]);  // Swap current element with the smaller element
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot at its final position (between smaller and larger elements)
    return (i + 1);
}

// Quick sort function to recursively sort the sub-arrays
void quick_sort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition the array

        // Recursively sort elements before (left half) and after (right half) partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    quick_sort(arr, 0, n - 1);  // Sort the entire array

    cout << "Sorted array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
