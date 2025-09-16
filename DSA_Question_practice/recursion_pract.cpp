#include <iostream>
using namespace std;

int fact(int n){
    //base class
    if(n==0){
        return 1;
    }
    else {
        int ans = fact(n-1) * n;
        return ans;
    }
}
int main(){
    int m ;
    cin>>m;
    int g = fact (m);
    cout<<"Answer is : "<<g;
    
}