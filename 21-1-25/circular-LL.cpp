#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;

Node(int data){
    this -> data = data;
    this -> next = NULL;
}
void print(Node* head){
      if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
   Node* tmp = head;

    do {
        cout << tmp->data << " ";
        tmp = tmp->next;
    } while (tmp != head); // Stop when we come back to the head node
    cout << endl;
}
};
 
Node* insertAtBegin(Node* head ,int data){
    Node* n1 = new Node(data);
    if(head == NULL){
        n1 -> next = n1; // circular nature
        return n1;
    }

    Node* tmp = head;
    while(tmp -> next != head){
        tmp = tmp -> next;
    }
    tmp -> next = n1;
    n1 -> next = head;
    return n1;

}

Node* insertAtEnd(Node* head ,int data){
    Node* n2 = new Node(data);
    if(head == NULL){
        n2 -> next = n2;
        return n2;
    }

    Node* tmp = head;
    while(tmp -> next != head){
        tmp = tmp -> next;
        // cout << tmp -> data << " " ;
    }

    tmp -> next = n2;
    n2 -> next = head;
    
    return head;

}

Node* insertAtPos(Node* head, int pos ,int data){
    if(pos == 1){
        return insertAtBegin(head,data);
    }

    Node* tmp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        tmp = tmp -> next;
        cnt ++;
        if(tmp == head) break;
    }

    Node* n3 = new Node(data);
    n3 -> next = tmp -> next;
    tmp -> next = n3;
    
    return head;

}

Node* deleteAtBegin(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return NULL;
    }

    if (head->next == head) {
        delete head;
        return NULL;  // Only one node in the list
    }

    Node* tmp = head;
    while (tmp->next != head) {
        tmp = tmp->next;
    }

    Node* newHead = head->next;
    tmp->next = newHead;
    delete head;
    return newHead;
}

// Function to delete a node from the end of the circular linked list
Node* deleteAtEnd(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return NULL;
    }

    if (head->next == head) {
        delete head;
        return NULL;  // Only one node in the list
    }

    Node* tmp = head;
    while (tmp->next->next != head) {
        tmp = tmp->next;
    }

    delete tmp->next;
    tmp->next = head;
    return head;
}


bool search(Node* head, int data) {
    if (head == NULL) {
        return false;  // List is empty
    }

    Node* tmp = head;
    do {
        if (tmp->data == data) {
            return true;
        }
        tmp = tmp->next;
    } while (tmp != head);

    return false;
}



int main() {
    Node* head = NULL; // Initially the list is empty

    // Inserting nodes at the beginning
    head = insertAtBegin(head, 10);  // List: 10
    head = insertAtBegin(head, 20);  // List: 20 -> 10
    head = insertAtBegin(head, 30);  // List: 30 -> 20 -> 10

    // Insert at the end
    head = insertAtEnd(head, 40);   // List: 30 -> 20 -> 10 -> 40
    cout << "List after inserting 40 at the end: ";
    head->print(head);

    // Insert at position 2
    head = insertAtPos(head, 2, 25); // List: 30 -> 25 -> 20 -> 10 -> 40
    cout << "List after inserting 25 at position 2: ";
    head->print(head);

    // Delete at the beginning
    head = deleteAtBegin(head); // List: 25 -> 20 -> 10 -> 40
    cout << "List after deleting at the beginning: ";
    head->print(head);

    // Delete at the end
    head = deleteAtEnd(head); // List: 25 -> 20 -> 10
    cout << "List after deleting at the end: ";
    head->print(head);

    // Search for a value
    if (search(head, 20)) {
        cout << "20 is found in the list." << endl;
    } else {
        cout << "20 is not found in the list." << endl;
    }

    return 0;
}