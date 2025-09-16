#include <iostream>

using namespace std;

// Structure for a node in the linked list
struct Node {
  int data;
  Node* next;
};

// Class representing the stack
class LinkedStack {
private:
  Node* head;

public:
  LinkedStack(): head(nullptr) {}

  // Check if the stack is empty
  bool isEmpty() const { return head == nullptr; }

  // Push an element onto the stack
  void push(int element) {
    Node* new_node = new Node;
    new_node->data = element;
    new_node->next = head;
    head = new_node;
  }

  // Pop an element from the stack
  int pop() {
    if (isEmpty()) {
      cout << "Stack underflow!" << endl;
      return -1;
    }
    Node* temp = head;
    int element = temp->data;
    head = head->next;
    delete temp;
    return element;
  }

  // Get the top element of the stack without removing it
  int peek() const {
    if (isEmpty()) {
      cout << "Stack is empty!" << endl;
      return -1;
    }
    return head->data;
  }

  // Get the size of the stack
  int size() const {
    int count = 0;
    Node* current = head;
    while (current) {
      count++;
      current = current->next;
    }
    return count;
  }

  // Destructor to clean up memory
  ~LinkedStack() {
    while (head) {
      Node* temp = head;
      head = head->next;
      delete temp;
    }
  }
};

int main() {
  // Create a new stack
  LinkedStack stack;

  // User interaction loop
  int choice, element;
  while (true) {
    cout << "\n1. Push element" << endl;
    cout << "2. Pop element" << endl;
    cout << "3. Peek top element" << endl;
    cout << "4. Show stack size" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter element to push: ";
        cin >> element;
        stack.push(element);
        break;
      case 2:
        element = stack.pop();
        if (element != -1) {
          cout << "Popped element: " << element << endl;
        }
        break;
      case 3:
        element = stack.peek();
        if (element != -1) {
          cout << "Top element: " << element << endl;
        }
        break;
      case 4:
        cout << "Stack size: " << stack.size() << endl;
        break;
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
    if (choice == 5) {
      break;
    }
  }

  return 0;
}
