#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<n)
    {
        for(int j=1 ; j<n ; j++){
            for (int k=0; k<j ; k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        i++;
    }
    
    
}