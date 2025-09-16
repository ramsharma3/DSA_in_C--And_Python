#include <iostream>
#include <vector>
using namespace std ;
void get_pivot(vector <int> arr1 , int n){
    for (int i=0 ; i < n; i++){
        if((i==0 || (arr1[i-1]>arr1[i])) && (i==n-1 || (arr1[i]<arr1[i+1]))){
            cout<<"pivot is : "<<i<<endl;
        }
    }
}
//main program
int main(){
    int size;
    vector<int> arr;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    cout << "Enter the elements : "<<endl;
    for (int i=0 ; i< size ; i++){
        int r;
        cin>>r;
        arr.push_back(r);
    }
    get_pivot(arr,size);

}