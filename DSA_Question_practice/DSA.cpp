#include <iostream>
using namespace std;
int main(){
    //int arr[]={};
    int size;
    cout<<"Enter the size of pattern you want to print : "<<endl;
    cin>>size;
    for (int i=1;i<size;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        
        }
        cout<<endl;
    }
}