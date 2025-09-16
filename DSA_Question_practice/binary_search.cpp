#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int n, int key) {
    int s = 0;
    int e = n - 1;
    bool flag = false;

    while (s <= e) {
        int mid = s + (e - s) / 2;  

        if (arr[mid] == key) {
            flag = true;
            break;  
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    if (flag) {
        cout << "The element is found at position " << s << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}

int main() {
    int size, element;
    vector<int> arr;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++) {
        int h;
        cin >> h;
        arr.push_back(h);
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to find in the array: ";
    cin >> element;
    binary_search(arr, size, element);

    return 0;
}
