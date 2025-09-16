#include <iostream>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
  int i = 0, j = 0, k = 0;
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }
  // Copy remaining elements from arr1 if any
  while (i < n) {
    arr3[k++] = arr1[i++];
  }
  // Copy remaining elements from arr2 if any
  while (j < m) {
    arr3[k++] = arr2[j++];
  }
}

int main() {
  using namespace std;

  int arr1[] = {1, 3, 5, 7};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {2, 4, 6, 8};
  int m = sizeof(arr2) / sizeof(arr2[0]);
  int arr3[n + m]; // Combined array size

  merge(arr1, n, arr2, m, arr3);

  // Print the merged array
  for (int i = 0; i < n + m; ++i) {
    cout << arr3[i] << " ";
  }
  cout << endl;

  return 0;
}