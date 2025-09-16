//recursion practice
#include <iostream>
using namespace std;
//recusively solving equation exponential power

int power(int n, int x){
    //base case
    if (x==0){
        return 1;
    }
    int ans = n * power(n,x-1);
    return ans;
}
//print counting 
void print_counting(int m){
    //base case
    if(m==0){
        return ;
    }
    //main chize
    cout<<m<<" ";
    print_counting(m-1);
    
    //return Answer;
}
//recursively solving factorial questions
int fact(int n){
    //base case
    if(n==1){
        return 1;
    }
    //main chize
    int result = n * fact(n-1);
    return result;
}

int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a;
    /*cout<<"Power of no. : ";
    cin>>b;*/
    //cout<<"the Answer is " <<power(a,b);
    //cout<<"the Answer is " <<fact(a);
    cout<<"reverse counting is : ";
    print_counting(a);
    //print_counting(a);
    return 0;
}
