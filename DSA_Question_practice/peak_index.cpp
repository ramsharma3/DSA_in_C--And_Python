#include <iostream>
#include <vector>
using namespace std;
void peak_index(vector<int> arr , int n){
    for (int i=0 ; i < n - 1 ; i++){
        if((i==0 || arr[i-1]<arr[i]) && (n-1==i || arr[i]>arr[i+1])){
            cout<<"Peak Index : "<<i;
        }
    }
    
}
int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    cout<<"Enter the elements : "<<endl;
    for (int i=0 ; i<size  ;i++){
        int u;
        cin>>u;
        arr.push_back(u);
    }
    peak_index(arr,size);
    
    return 0;


}