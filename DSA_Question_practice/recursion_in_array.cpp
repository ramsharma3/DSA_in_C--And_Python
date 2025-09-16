#include<iostream>
using namespace std;
bool is_sorted(int arr[],int size){
    
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    
    }
    else{
        bool remaining_part = is_sorted(arr+1 , size - 1);
        return remaining_part;
    }
}
int main(){
    
    int size ;
    cin>>size;
    int *arr=new int(size);
    for (int i=0 ; i<size ; i++){
        cout<<"enter the elements : " ;
        cin>>arr[i];
    }
    bool ans = is_sorted(arr , size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    delete[] arr;
    return 0;

}