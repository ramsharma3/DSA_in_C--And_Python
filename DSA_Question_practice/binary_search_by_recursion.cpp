#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
bool binary_search(int *arr , int s , int e , int k){
    //base case
    if(s>e){
        return false;

    }
    int mid = s + ((e-s)/2);
    if(arr[mid]==k){
        return true;
    }
    

    if(arr[mid]<k){
        return binary_search(arr , mid + 1 , e , k);
    }
    else {
        return binary_search(arr , s , mid - 1 , k);
    }

}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // Specify the size of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "The sorted array is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    int key;
    cout<<"\nEnter the key : ";
    cin>>key;
    bool ans = binary_search(arr , 0 , n-1 , key );
    if(ans){
        cout<<"Key is present!!";

    }
    else{
        cout<<"key is not present!!";
    }


    return 0;
}
