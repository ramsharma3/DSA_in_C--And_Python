#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){   //base case which is mendatory
        return 0;
    }
    if(n==1){
        return 1;
    }
    return n * factorial(n-1); 
    
}
int main(){
    int m;
    cin>>m;
    int ans;
    ans = factorial(m);
    cout<<ans;
}