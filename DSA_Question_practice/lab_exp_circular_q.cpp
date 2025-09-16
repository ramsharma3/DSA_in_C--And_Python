#include <iostream>
using namespace std;
int cq[5];
int front = -1 , rear = -1 , n = 5;
void insertcq(int val){
    if((front == 0 && rear == n-1 ) || (front == rear+1)){
        cout<<"Queue overflow\n";
        return;

    }
    if(front == -1){
        front = 0;
        rear= 0;
    }
    else {
        if(rear == n-1){
            rear = 0 ;

        }
        else {
            rear = rear + 1;
        }
    
    }
    cq[rear] = val; 
}
 
void deletecq(){
    if(front == -1){
        cout<<"Queue Underflow\n";
        return ;
    }
    cout<<"Element deleted form queue is: "<<cq[front]<<endl;
    if(front == rear){
        front = -1 ;
        rear = -1;

    }
    else{
        if(front == n-1){
            front = 0;
        }
        else{
            front = front+1;
        }
    }
} 
void displaycq(){
    int f = front , r=rear;
    if(front == -1){
        cout<<"Queue is empty"<<endl;
        return;

    }
    cout<<"Queue elements are: \n"<<endl;
    if(f <= r){
        while(f <= r){
            cout<<cq[f]<<" ";
            f++;
        }
        /*f=0;
        while(f <=r){
            cout<<cq[f]<<" ";
            f++;

        }*/
    }
    cout<<endl;
}
int main(){
    int ch , val;
    cout<<"1. For Insertion"<<endl;
    cout<<"2. For Deletion"<<endl;
    cout<<"3. For Display"<<endl;
    cout<<"4. For Exit"<<endl;
    do{
        cout<<"Enter choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Input for Insertion : "<<endl;
            cin>>val;
            insertcq(val);
            break;
            case 2:
           // cout<<"Dequeue"<<endl;
            deletecq();
            break;
            case 3 : 
            displaycq();
            break;
            case 4: 
            cout<<"Exit"<<endl;
            break;
            default:
            cout<<"Wrong choice";
            
        }
    }
    while(ch!=4);
        return 0;
    
}