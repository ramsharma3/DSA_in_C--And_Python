#include<iostream>
using namespace std;

int stairs(int n){
    //base case 
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    //recursive processing 
    int ans = stairs(n-1) + stairs(n-2);
    return ans;
}

int main(){
    int m;
    cout<<"Enter a no. to sum its digit : ";
    cin>>m;
    cout<<"Answer is : "<<stairs(m);
   
}