// sum and product of any digit
#include <iostream>
using namespace std;
int sum_of_digit(long n ){
    int sum=0;
    
    while(n!=0){
        int c = n%10;
        sum=sum+c;
        n = n/10;
    }
    return sum;
}
int product_of_digit(long n ){
    int prod=1;
    
    while(n!=0){
        int c = n%10;
        prod=prod*c;
        n = n/10;
    }
    return prod;
}



int main() {
    long x;
    cout<<"Enter the no. to get sum of digit of that no. : ";
    cin>>x;
    int f=sum_of_digit(x);
    cout<<"The sum of digit is : "<<f<<endl;
    int g = product_of_digit(x);
    cout<<"The product of digit is : "<<g;

    return 0;
}