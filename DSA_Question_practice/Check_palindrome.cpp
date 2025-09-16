#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str ){
    int i=0;
    int j = str.length() - 1;
    while (i<=j){
        if(str[i]!=str[j]){
                return false;
        }
        i++;
        j--;
    }
    return true;
}
   

int main(){
    string str;
    cout<<"Enter the string to check if palindrome or not : ";
    cin>>str;
    palindrome(str);
    if(palindrome(str)){
        cout<<"The string is palindrome."<<endl;
    }
    else{
        cout<<"It is not palindrome."<<endl;
    }

}   