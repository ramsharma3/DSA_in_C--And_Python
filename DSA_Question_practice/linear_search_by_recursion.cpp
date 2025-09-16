#include <iostream>
using namespace std;

bool linear_search(int arr[] , int size , int l){
    //base case
    if(size==0){
        return false;

    }
    if(arr[0] == l){
        return true;
    }
    else {
        bool check = linear_search(arr+1 , size - 1 , l);
        return check; 
    }
}
int main(){
    int size;
    cin>>size;
    int *arr = new int (size);
    for (int i = 0 ; i<size ; i++){
        cout<<"enter the element : ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    bool ans = linear_search(arr , size , key);
    if(ans){
        cout<<"Element present!!"<<endl;
    }
    else{
        cout<<"Element not present!!"<<endl;
    }
    delete[] arr ;
}