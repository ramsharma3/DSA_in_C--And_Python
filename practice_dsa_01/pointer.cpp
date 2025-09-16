#include <iostream>
using namespace std;


class ptr{
    public:
    int n;
    int f;
    public:
    int get(int a , int b){
        
        this -> f = a;
        this -> n = b;
        return f * n;
    }

};

int main(){
    ptr * r;
    int a = 3;
    int b = 4;
    cout<<"Entered information is...."<<r.get(a , b);

}