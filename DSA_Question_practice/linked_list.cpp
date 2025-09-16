#include <iostream>
#include <string.h>
using namespace std;
class node {
    public :
    // int data ;
    node * next;
    //using constructor
    node ( int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtStart(node * &head , int d){
    //new node create
    node * temp = new node(d);
    temp -> next = head;
    head = temp;
}
void print (node * &head){
    node * temp = head;
    
    while (temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;

}

int main(){
    node * node1  = new node(10);
    //cout<< node1 -> data << endl;
    //cout<<node1 -> next << endl;
    node * head = node1;

    print(head);


    insertAtStart(head , 20);
    print(head);

    insertAtStart(head , 30);
    print (head);
    return 0;
}
//type of linear data structure
        //collection of node
        //why linked list instead of array or vector 
        // it have dynamic data strucuture (grow or shrink at runtime) no wastage of memory
        //types of linked list->singly , doubly , circular
        //node -> data , address of next node 
        //
    