#include <iostream>
using namespace std;

void saydigit(int n ,string arr[]){
    //base case
    if(n==0){
        return ;
    }
    //if (n/10 == ){
      //  return ;
//    }

    //processing
    int digit = n % 10;
    n = n / 10;
    
    

    //recursive call
    saydigit(n , arr);
    cout<<" "<<arr[digit]<<" ";

    

}
int main(){
    string arr[10] = {"Zero" , "One" , "Two" , "Three",
                       "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};
    int n;
    cout<<"Enter a number : ";
    cin>>n;  
    saydigit(n,arr);                 
}