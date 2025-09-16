#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= m){
            cout<<"&";
            j++;
        }

        i++;
        cout<<endl;
    }
}