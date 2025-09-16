#include <iostream>
#include <string>
using namespace std;

void reverse(string r){
    //for (int i = 0 ; i <= '')
    int i = 0;
    int n = sizeof(r);
    
    while (i <=n){
        

        swap(r[i] , r[n]);
        i++;
        n--;

    }
    while (r[i] != '\0')
    {
        /* code */
        cout<<r[i];
        i++;
    }
    
}
int main(){
    string r ;
    getline(cin , r);
    reverse(r);
}

