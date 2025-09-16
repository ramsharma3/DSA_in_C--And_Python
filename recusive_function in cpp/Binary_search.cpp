#include <iostream>
using namespace std;

bool binary_Search( int *arr , int s , int e, int key  ){
    //base case 

    if (s > e){
        return false;
    }
    int mid = s + (e - s)/2;
    if (arr[mid] == key){
        return true;
    }

    if(arr[mid] > key){
        return binary_Search( arr , s , mid - 1 , key);
    }
    if(arr[mid] < key){
        return binary_Search(arr, mid + 1 , e , key);
    }

}

int main(){
    int arr[5] = {4 , 6, 7, 8, 9};
    int k;
    cout<<"Enter a no. to find : ";
    cin>> k;

    cout<<"1 for found and 0 for not found : "<<binary_Search(arr , 0 , 4 , k)<<endl;
}