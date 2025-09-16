//basic operations on stack

#include<iostream>
#include<stack>
using namespace std;


#include <iostream>
using namespace std;

class mystack {
public:
    // data members
    int top;
    int *arr;
    int size;

    // constructor
    mystack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // destructor to avoid memory leak
    ~mystack() {
        delete[] arr;
    }

    // push function
    bool push(int n) {
        if (overflow()) {
            cout << "Stack Overflow! Cannot push " << n << endl;
            return false;
        }
        top++;
        arr[top] = n;
        return true;
    }

    // check if stack is empty
    bool isempty() {
        return top == -1;
    }

    // pop function
    int pop() {
        if (isempty()) {
            cout << "Stack Underflow! Cannot pop" << endl;
            return -1; // return -1 to indicate an error
        }
        int popped = arr[top];
        top--;
        return popped;
    }

    // peek function
    int peek() {
        if (isempty()) {
            cout << "Stack is empty!" << endl;
            return -1; // return -1 to indicate an error
        }
        return arr[top];
    }

    // check if stack is full (overflow)
    bool overflow() {
        return top >= size - 1;
    }
};

int main() {
    mystack s(5); // stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    cout << "Popped element: " << s.pop() << endl;

    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}


