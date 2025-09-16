#include <iostream>
#include <string.h>
using namespace std;
void say_digit(int n,string arr[]){
    
    //base case
    if(n==0){
        return ;
    }


    //processing 
    int digit = n % 10;
    n=n/10;


    //recursionn call
    say_digit(n , arr);
    cout<<arr[n]<<" ";
} 
int main(){
    int m;
    cin>>m;
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    say_digit(m,str);
}   
    
    