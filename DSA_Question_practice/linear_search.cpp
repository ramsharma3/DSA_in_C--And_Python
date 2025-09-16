#include <iostream>
using namespace std;
void linear_search(int arr[]  , int n , int key){
    for (int i=0 ; i<n-1 ; i++){
        if(arr[i]==key){
            cout<<"Element found!! at the position of "<<i;
        }
        else {
            cout<<"Element Not found!!"<<endl;
        }
    }
}
int main(){
    int size ;
    int arr[]={};
    int element;
    cout<<"Enter the size of element : "<<endl;
    cin>>size;
    for(int i=0 ; i < size - 1 ; i++ ){
        cout<<"Enter the element : ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"Enter the element to find in the array : "<<endl;
    cin>>element;
    linear_search(arr , size , element);
    
} 