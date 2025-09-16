#include <iostream>
using namespace std;

#define max 5
int q[max] , front = - 1 , rear = -1;
void enqueue();
void dequeue();
void disp();
void enqueue() {
            int data ;
            if(rear==max-1){
                cout<<"Queue is overflow, insertion is not possible"<<endl;
            }
            else{
                if(front == -1){
                    front = 0;
                }
                cout<<"Enter Element: ";
                cin>>data;
                rear++;
                q[rear] = data;
            }
        }
        void dequeue(){
            if(front == -1 || front > rear){
                cout<<"Queue is underflow , deletion is not possible" ;
            }
            else{
                cout<<"\nDequeue"<<endl;
                front++;
            }
        }
        void disp(){
            if(front == -1){
                cout<<"\nQueue is empty"<<endl;
            }
            
            else{
                cout<<"Elements are: ";
                for(int i = front ; i <= rear ; i++ ){
                    
                    cout<<q[i]<<" ";
                }
            }
        }


int main(){
    int ch;
    cout<<"\n1. Enqueue or insert";
    cout<<"\n2. Dequeue or delete";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    while (1){
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1/* constant-expression */:
            /* code */
            enqueue();
            
            break;
        case 2:
        dequeue();
        break;
        case 3:
        disp();
        break;
        case 4:
        exit(0);    
        
        default:
        cout<<"Invalid Input"<<endl;
            break;
        }
        
    }
}