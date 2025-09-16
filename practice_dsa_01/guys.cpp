#include <iostream>
using namespace std;
void get_input(int arr1[] , int n){
    //int * arr = new int(n) ;
    for (int i = 0 ; i <= n ; i++ ){
        cin>>arr1[i];
    }
}
void get_output(int arr1[] , int n){
    for(int i = 0 ; i <= n ; i++){
        cout<<arr1[i]<<" ";
    }
}
int sorted(int arr1[] , int n){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 1; j <=  n - i ; j++){
            if(arr1[i] > arr1[j]){
                swap(arr1[i] , arr1[j]);
            }
        }
    }
}
int find_element(int arr1[] , int n , int value){
    int s = 0;
    int e = sizeof(arr1);
    int mid = s + ((e + s)/2);
    while (e >= s)
    {
        /* code */
        if(arr1[mid] == value){
            return mid;
        }
        else if(arr1[mid] > value){
            e = mid - 1;

        }
        else if (arr1[mid] < value){
            s = mid + 1;
        }
        mid = s + ((s + e)/2);

    }
    return mid;
    
}

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int * arr = new int(n);
    cout<<"Enter Elements: ";
    get_input(arr , n);
    cout<<"Elements are : "<<endl;
    get_output(arr , n);
    sorted(arr, n);
    cout<<"Sorted array is : ";
    get_output(arr , n);
    
    find_element(arr , n);


    delete[] arr;

   
}