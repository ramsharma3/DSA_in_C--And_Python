#include <iostream>
#include <vector>
using namespace std;
int count(vector<int>a4, int n , int k){
    int count=1;
    for (int i=0 ; i<n-1 ; i++){
        if(a4[i]==k){
            count++;
        }

    }
    return count;
}
int main() {
    int size;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    vector<int > arr;
    cout<<"Enter the elements : "<<endl;
    for (int i=0 ; i<size ; i++){
        int y;
        cin >> y;
        arr.push_back(y);
    }
    int key;

    cout<<"Enter the key to count any the list : "<<endl;
    cin>>key;


    int result=count(arr,size,key);
    //for (int i=0 ; i<size ; i++){
    cout<<"The no. of times "<<key<<" is in the array is : "<<result<<" ";
    
    return 0;

}