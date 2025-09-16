#include <iostream>
using namespace std;

void sorted(int * arr , int size){
    //base case
    if(size == 0){
        return ;
    }
    if(size == 1){
        return ;
    }
    if(arr[0] > arr[1]){
        swap(arr[0],arr[1]);
        
    }
    sorted(arr + 1 , size - 1);
    cout<<"Answer is : ";
    for(int i = 0 ; i++ ; i <= size){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[4] = {4 , 6, 7, 9};
    int n;
    cout<<"Enter size : ";
    cin>>n;
    sorted(arr , n);
}