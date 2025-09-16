#include <iostream>
using namespace std;

int sum_of_digit(int n){
    if(n/10==0){
        return n;
    }
    //process
    int sum = n%10 + sum_of_digit(n/10);
    
    return sum;
    
}
int main(){
    int m;
    cout<<"Enter a no. to sum its digit : ";
    cin>>m;
    cout<<"Answer is : "<<sum_of_digit(m);
   
}