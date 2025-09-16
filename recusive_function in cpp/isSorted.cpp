//ascending order sorting
#include <iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr + 1 , size - 1);
        return ans;
    }

}

int main(){
    int arr[5] = {1 , 2 , 5 , 7 , 8};
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    if(isSorted(arr , n)){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
}
