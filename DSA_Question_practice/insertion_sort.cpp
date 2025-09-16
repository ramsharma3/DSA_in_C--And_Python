#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n]; // Specify the size of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    cout << "The sorted array is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}
