#include <iostream>
using namespace std;
int sum_of_digit(int n){
    if(n==0){
        return 0;
    }
    
    
    int digit = n % 10;
    int sum = digit + sum_of_digit(n/10);

    
    return sum;
}

int main(){
    int n;
    cin>>n;
    int ans = sum_of_digit(n);
    cout<<"Answer is : "<<ans;
}
