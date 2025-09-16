

/*#include <iostream>
#include <algorithm>
using namespace std;
void selection_sort(int arr[] , int n ){
    bool flag=false;
    for (int i=0; i<n-1 ; i++){
        for (int j=i+1 ; j<n ; j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
// main program
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // Specify the size of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "The sorted array is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "The sorted array is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}

