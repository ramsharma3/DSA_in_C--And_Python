#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;
};

// Function to create a new node
Node* newNode(int data) {
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = nullptr;
  new_node->prev = nullptr;
  return new_node;
}

// Function to display the Doubly Linked List
void displayList(Node* head) {
  Node* temp = head;
  cout << "Doubly Linked List: ";
  while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// Function to insert a node at any position
void insertNode(Node** head, int data, int pos) {
  Node* new_node = newNode(data);
  if (pos == 0) { // Insert at beginning
    new_node->next = *head;
    (*head)->prev = new_node;
    *head = new_node;
  } else {
    Node* temp = *head;
    for (int i = 0; i < pos - 1; i++) {
      if (temp->next == nullptr) {
        cout << "Position out of bounds! List only has " << i + 1 << " nodes." << endl;
        return;
      }
      temp = temp->next;
    }
    if (temp->next != nullptr) { // Insert in middle
      new_node->next = temp->next;
      temp->next->prev = new_node;
    }
    temp->next = new_node;
    new_node->prev = temp;
  }
  cout << "Node with data " << data << " inserted at position " << pos << "." << endl;
}

// Function to delete a node at any position
void deleteNode(Node** head, int pos) {
  if (*head == nullptr) {
    cout << "List is empty! Cannot delete any node." << endl;
    return;
  }
  Node* temp = *head;
  for (int i = 0; i < pos; i++) {
    if (temp->next == nullptr) {
      cout << "Position out of bounds! List only has " << i + 1 << " nodes." << endl;
      return;
    }
    temp = temp->next;
  }
  if (pos == 0) { // Delete head node
    *head = temp->next;
    if (*head != nullptr) {
      (*head)->prev = nullptr;
    }
  } else { // Delete middle or end node
    if (temp->next != nullptr) {
      temp->next->prev = temp->prev;
    }
    temp->prev->next = temp->next;
  }
  delete temp;
  cout << "Node at position " << pos << " deleted." << endl;
}

int main() {
  Node* head = nullptr;
  int choice, data, pos;

  while (true) {
    cout << "\n1. Insert Node" << endl;
    cout << "2. Delete Node" << endl;
    cout << "3. Display List" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter data: ";
        cin >> data;
        cout << "Enter position: ";
        cin >> pos;
        insertNode(&head, data, pos);
        break;
      case 2:
        cout << "Enter position: ";
        cin >> pos;
        deleteNode(&head, pos);
        break;
      case 3:
        displayList(head);
        break;
      case 4:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice! Please enter a valid option." << endl;
    }

    if (choice == 4) {
      break;
    }
  }

  return 0;
}