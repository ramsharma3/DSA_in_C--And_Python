#include <iostream>
using namespace std;

int get_pivot(int arr[] , int n){
    int s = 0 ;
    int e = sizeof(arr) - 1;
    int mid = s + ((e - s)/2);
    while (e >= s){
        if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]){
            return mid;
        }
        else if(arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1]){
            mid = mid - 1;
        }  
        else if(arr[mid] < arr[mid + 3])
    }
}