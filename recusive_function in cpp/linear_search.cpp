#include<iostream>
using namespace std;

bool linear_search(int *arr , int size , int element){
    //base case
    if(size == 0){
        return false;
    }
    //recursive call
    if(arr[0] == element){
        return true;
    }
    //else{
        //bool ans =
    linear_search(arr + 1 , size - 1 , element) ;
        //return ans;
    //}

    
    
     
    


}
int main(){
    int n;

    cout<<"Enter the element to search in the array : ";
    cin>>n;
    int arr[5] = {4 , 2 , 8 , 8 , 3};
    if(linear_search(arr , 5 , n)){
        cout<<"Element found!!"<<endl;
    }
    else{
        cout<<"Not found!!"<<endl;
    }
    

}