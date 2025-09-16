#include <iostream>
using namespace std;

class myQueue{
    public:
    int top;
    int size;
    int * arr;

    public:

    myQueue(int s){
        int top = -1;
        this -> size = s;
        arr = new int[size];
    }

    bool overflow(){
        if(top >= size-1){
            return false;
        }
        else{
            return true;
        }
    }

    int inqueue(int n){
        if(overflow()){
            cout << "The queue is overflow!! cannot add a new element to it " << n << endl;
        }
        else{
            top++;
            arr[top] = n;
        }
    }

    bool underflow(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void dequeue(){
        if(underflow()){
            cout<<"Cannot delete its empty ;)";
        }
        else{
            for (int i = 0 ; i < top ; i++){
                arr[i] = arr[i+1];
            }
            top--;
        }
    }
    void peek(){
        if(underflow()){
            cout << "The Queue is empty";
            
        }
        else{
            cout << "The top element is : " << arr[0];
        }
        
    }
};

int main(){

    myQueue Qu(3);
    Qu.inqueue(10);
    Qu.inqueue(20);
    Qu.inqueue(30);
    Qu.inqueue(40);

    Qu.overflow();

    Qu.peek();

}