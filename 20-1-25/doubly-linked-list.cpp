#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        this->next = NULL;
        this->prev = NULL;
        cout << "Memory freed with value: " << val << endl;
    }
};

// Insert a new node at the head
void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* n1 = new Node(data);
    if (head == NULL) {
        head = n1;
        tail = n1;
        return;
    }
    n1->next = head;
    head->prev = n1;
    head = n1;
}

// Insert a new node at the tail
void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* n1 = new Node(data);
    if (tail == NULL) {
        head = n1;
        tail = n1;
        return;
    }
    tail->next = n1;
    n1->prev = tail;
    tail = n1;
}

// Print the doubly linked list
void print(Node* &head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Insert a new node at a specific position
void insertAtPos(Node* &head, Node* &tail, int pos, int data) {
    if (pos == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    Node* tmp = head;
    int cnt = 1;

    // Traverse to the position just before the target
    while (cnt < pos - 1 && tmp != NULL) {
        tmp = tmp->next;
        cnt++;
    }

    if (tmp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Handle insertion at the end
    if (tmp->next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }

    // Create the new node and insert it
    Node* n2 = new Node(data);
    n2->next = tmp->next;
    tmp->next->prev = n2;
    tmp->next = n2;
    n2->prev = tmp;
}

// Delete a node at a specific position
void deleteAtPos(Node* &head, Node* &tail, int pos) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // Deleting the head node
    if (pos == 1) {
        Node* tmp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // List becomes empty
        }
        delete tmp;
        return;
    }

    Node* tmp = head;
    int cnt = 1;

    // Traverse to the position just before the target node
    while (cnt < pos && tmp != NULL) {
        tmp = tmp->next;
        cnt++;
    }

    if (tmp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Handle deletion at the end
    if (tmp->next == NULL) {
        tmp->prev->next = NULL;
        tail = tmp->prev;
        delete tmp;
        return;
    }

    // Handle deletion in the middle
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    delete tmp;
}

int main() {
    vector<int> v = {5, 7, 9, 10, 15, 20};
    Node* head = NULL;
    Node* tail = NULL;

    // Insert elements into the list
    for (int i = 0; i < v.size(); i++) {
        insertAtTail(head, tail, v[i]);
    }

    // Print the list
    cout << "Original list: ";
    print(head);

    // Delete at position 3
    deleteAtPos(head, tail, 3);
    cout << "After deleting position 3: ";
    print(head);

    // Insert at position 2
    insertAtPos(head, tail, 2, 8);
    cout << "After inserting 8 at position 2: ";
    print(head);

    // Insert at the head
    insertAtPos(head, tail, 1, 4);
    cout << "After inserting 4 at the head: ";
    print(head);

    // Insert at the tail
    insertAtPos(head, tail, 7, 25);
    cout << "After inserting 25 at the tail: ";
    print(head);

    return 0;
}
