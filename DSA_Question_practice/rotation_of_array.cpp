#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotate_an_array(vector<int>& arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
}

int main() {
    vector<int> a1;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a1.push_back(k);
    }

    rotate_an_array(a1, n);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << a1[i] << " ";
    }

    return 0;
}
