#include <iostream>
using namespace std;

int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive call
    int ans = n * fact(n-1);
}

int main(){
    int k;
    cout<<"Enter a no.";
    cin>>k;
    cout<<"Answer is : "<<fact(k);
}