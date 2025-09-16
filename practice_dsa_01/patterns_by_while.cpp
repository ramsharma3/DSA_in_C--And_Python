#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*int i = n;
    while (i <= 0){
        int j = n;
        while(j >= i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }*/
    int i = n;
    while(i >= 1){
        int j = 1;
        while(j <= i ){
            cout<<"*";
            j++;
        }
        i--;
        cout<<endl;

    }
}