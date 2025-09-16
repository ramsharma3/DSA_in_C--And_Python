#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n) {
    if (n == 0 || n == 1) {
        return; 
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr1 = new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    bubble_sort(arr1, n);
    cout << "The sorted array is: ";

    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    delete[] arr1;

    
}
