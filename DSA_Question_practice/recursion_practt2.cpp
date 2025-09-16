#include <iostream>
using namespace std;

int fibo(int n){
    //base class
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else {
        int an  = fibo(n-1)+ fibo(n-2);
        return an;
    }
}

int main(){
    int b;
    cin>>b;
    int g = fibo(b);
    cout<<"Answer is : "<<g;
}
