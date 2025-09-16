#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    int * arr = new int(n);
    cout << "Enter elements of array : "<<endl;
    for(int i = 0 ; i <= n ; i++){
        cin>>arr[i];
        cout<<" ";
    }
    swap(arr[0] , arr[n]);
    cout<<"Elements are : ";
    for(int i = 0 ; i <= n ; i++){
        cout<<arr[i]<<" ";
        
    }

}