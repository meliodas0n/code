#include <iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

class LinkedList {
  public:
    Node *head, *tail;
    LinkedList() {
      head = NULL;
      tail = NULL;
    }

    void insertNodeAtFront(int value) {
      Node *newNode = new Node;
      newNode->data = value;
      newNode->next = NULL;
      if (head == NULL) {
        head = newNode;
        tail = newNode;
      } else {
        newNode->next = head;
        head = newNode;
      }
    }

    void insertNodeAtEnd(int value) {
      Node *newNode = new Node;
      newNode->data = value;
      newNode->next = NULL;
      if (head == NULL) {
        head = newNode;
        tail = head;
        return;
      } else {
        tail->next = newNode;
        tail = tail->next;
        return;
      }
    }

    void insertAtPosition(int pos, int value) {
      Node *prev = new Node;
      Node *current = new Node;
      current = head;
      Node *newNode = new Node;
      newNode->data = value;
      newNode->next = NULL;
      if (pos < 1) {
        cout << "Position cannot be less than one" << "\n";
      } else if(pos == 1) {
        newNode->next = head;
        head = newNode;
      } else {
        for (int i = 1; i < pos; i++) {
          prev = current;
          current = current->next;
          if (current == NULL) {
            cout << "Invalid position";
            return;
          }
        }
        prev->next = newNode;
        newNode->next = current;
      }
    }

    void search(int value) {
      Node *current = head;
      while (current != NULL) {
        if (current->data == value) {
          cout << "Element " << value << " is found" << "\n";
          return;
        }
        current = current->next;
      }
      cout << "Element " << value << " not found in the list" << "\n";
    }

    void displayList() {
      Node *current = head;
      while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
      }
    }

    void deleteNode(int value) {
      bool flag = false;
      Node *current = new Node;
      Node *previous = new Node;
      previous = head;
      current = head;
      while (current != NULL) {
        if (current->data == value and current == head) {
          head = current->next;
          free(current);
          flag = true;
          break;
        } else if (current->data == value) {
          previous->next = current->next;
          if (current == tail) {
            tail = previous;
          }
          free(current);
          flag = true;
          break;
        } else {
          previous = current;
          current = current->next;
        }
      }
      if (flag == true) {
        cout << "Element " << value << " deleted \n";
      } else {
        cout << "Element " << value << " not found \n";
      }
    }
};

int main() {
  LinkedList lst;
  lst.insertNodeAtFront(40);
  lst.insertNodeAtFront(30);
  lst.insertNodeAtFront(20);
  lst.insertNodeAtFront(10);
  lst.insertAtPosition(3, 100);
  lst.insertNodeAtEnd(70);
  lst.search(150);
  lst.deleteNode(40);
  lst.displayList();
  return 0;
}
