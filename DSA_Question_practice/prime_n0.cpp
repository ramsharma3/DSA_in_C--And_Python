// Prime No. Program
#include <iostream>
using namespace std;
int isPrime(int n){
    bool a = false;
    for (int i=2;i<n;i++){
        if(n%i==0){
            a=true;
        }
    }
    if(a==true){
        cout<<"It is not prime no."<<endl;
    }
    else{
        cout<<"Prime No. "<<endl;
    }
    
}
int main() {
    int b;
    cout<<"Enter the no. to check Whether the no. is prime or not : ";
    cin>>b;
    isPrime(b);
    

    return 0;
}