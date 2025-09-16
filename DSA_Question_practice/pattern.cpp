#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    
    while (n<=i){
        int space = n;
        while (space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=i){
            cout<<"*";
        }j++;
        
    }
    i++;
}
