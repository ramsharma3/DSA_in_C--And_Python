#include <iostream>
using namespace std;

int Pivot_index(int *arr , int size , int s , int e){
    if (size <= 1){
        return -1; 
    }
    if(s > e){
        return -1; 
    }

    int mid = s + ((e - s)/2);

    if((mid == 0 || arr[mid] >= arr[mid + 1]) && (mid == size - 1 || arr[mid] >= arr[mid - 1])){
        return mid; 
    }

    if(mid > 0 && arr[mid] < arr[mid + 1]){
        return Pivot_index(arr , size , mid + 1 , e);
    }
    else{
        return Pivot_index(arr , size , s , mid - 1);
    }
}

int main(){
    int arr[6] = {1 ,2 , 4,5 ,2 ,4};
    int size = 6;
    int pivot = Pivot_index(arr , size , 0, size - 1);
    if(pivot != -1){
        cout<<"Pivot Index is : " << pivot << endl;
        cout<<"Pivot Value is : "<<arr[pivot]<<endl;
    }
    else {
        cout << "No pivot found in the array." << endl;
    }
}
