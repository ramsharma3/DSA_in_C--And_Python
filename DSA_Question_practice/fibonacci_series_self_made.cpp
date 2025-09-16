#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if(n<=1){
        return n;
    }
    //process
    //int ans = 
    return fib(n-1) + fib(n-2);
}    

int main(){
    int m;
    cout<<"Enter a no. for fibanacci series : ";
    cin>>m;
    cout<<"Answer is : "<<fib(m);
}