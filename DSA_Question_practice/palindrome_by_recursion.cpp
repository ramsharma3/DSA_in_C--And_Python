#include <iostream>
#include <string>
using namespace std;
 
bool check_palindrome(string str , int i , int j){
    //base case
    if(i>=j){
        return true ;

    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        check_palindrome(str, i+1 , j-1);
    }
}

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int i = 0;
    int j = str.length()-1;
    if(check_palindrome(str,i , j )){
        cout<<"The string is palindrome."; 
    }
    else{
        cout<<"It is not a palindrome.";
    }
}