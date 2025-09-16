#include <iostream>
using namespace std;

int Peak_index(int *arr, int size, int s, int e) {
    if (size <= 1) {
        return 0;  // Base case: Array has 0 or 1 element, so no peak.
    }
    if (s > e) {
        return -1; // Base case: Invalid range.
    }

    int mid = s + (e - s) / 2;

    if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
        (mid == size - 1 || arr[mid] >= arr[mid + 1])) {
        return mid; // Found peak element.
    } else if (mid > 0 && arr[mid] < arr[mid - 1]) {
        // Search left subarray.
        return Peak_index(arr, size, s, mid - 1);
    } else {
        // Search right subarray.
        return Peak_index(arr, size, mid + 1, e);
    }
}

int main() {
    int arr[5] = {2, 3, 4, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size.
    int peak_index = Peak_index(arr, size, 0, size - 1);
    if (peak_index != -1) {
        cout << "The peak index is: " << peak_index << endl;
        cout << "The peak element is: " << arr[peak_index] << endl;
    } else {
        cout << "No peak found in the array." << endl;
    }
    return 0;
}
