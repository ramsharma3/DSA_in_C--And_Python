#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

// Function to allocate and initialize a new node
Node* createNode(int value) {
  Node* new_node = new Node;
  new_node->data = value;
  new_node->next = nullptr;
  return new_node;
}

// Function to insert element at the beginning of the list
void insertAtBeginning(Node** head, int value) {
  Node* new_node = createNode(value);
  new_node->next = *head;
  *head = new_node;
}

// Function to insert element at the end of the list
void insertAtEnd(Node** head, int value) {
  if (!*head) { // Empty list
    insertAtBeginning(head, value);
  } else {
    Node* temp = *head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = createNode(value);
  }
}

// Function to print the list
void printList(Node* head) {
  if (!head) {
    cout << "Empty list!" << endl;
    return;
  }
  cout << "List: ";
  while (head) {
    cout << head->data << " -> ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

int main() {
  Node* head = nullptr;
  int choice, value;

  while (true) {
    cout << "\n1. Insert at beginning" << endl;
    cout << "2. Insert at end" << endl;
    cout << "3. Print list" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter element value: ";
        cin >> value;
        insertAtBeginning(&head, value);
        break;
      case 2:
        cout << "Enter element value: ";
        cin >> value;
        insertAtEnd(&head, value);
        break;
      case 3:
        printList(head);
        break;
      case 4:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
    if (choice == 4) {
      break;
    }
  }

  // Free allocated memory
  while (head) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }

  return 0;
}
