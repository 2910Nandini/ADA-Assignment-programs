//to sort the linked list
#include <stdlib.h>
#include <iostream>
using namespace std;
                                     //assignment 24
struct Node {
  int data;
  struct Node* next;
};
void sortLinkedList(struct Node** head_ref) {     //to sort the list
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    // index points to the node next to current
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}
// Print the linked list
void printList(struct Node* node) {
  while (node != NULL) {
  cout << node->data << " ";
  node = node->next;
  }
}
// Driver program
int main() {
  struct Node* head = NULL;

  sortLinkedList(&head);
  cout << "\nSorted List: ";
  printList(head);
  return 0;
}
