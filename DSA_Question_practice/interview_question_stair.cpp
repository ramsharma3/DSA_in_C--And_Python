#include <iostream>
using namespace std;
int stairs(int n){
    //base case
    if(n<0){
        return 0;
    
    }
    if (n==0){
        return 1;
    }
    int ans = stairs(n-1)+stairs(n-2);
    return ans;

}
int main(){
    int m;
    cin>>m;
    int an = stairs(m);
    cout<<"The answer is "<<an;
}
