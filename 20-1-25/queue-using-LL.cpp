#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        cout << "destructor called" << endl;
    }
};

class Queue{
public:
    Node* front;
    Node* rear;

    Queue(){
        this -> front = NULL;
        this -> rear = NULL;
    }
    
    void push(int data){
        Node* n1 = new Node(data);
        if(rear == NULL){
            front = rear = NULL;
        }
        else{
            rear -> next = n1;
            rear = n1;
        }
        cout << data << " added to queue" << endl;
    }

    void pop(){
        if(front == NULL){
            cout << "can't pop Queue empty" << endl;
            return;
        }
        Node* tmp = front ;
        front = front -> next;
        cout << tmp -> data << "deleted" << endl;
        delete tmp;
    }

    int peek(){
        if(front == NULL){
            cout << "Queue empty" << endl;
            return -1;
        } 
        return front -> data; 
    }

    bool isEmpty(){
        return front == NULL ;
    }

 
};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front element: " << q.peek() << endl;

    q.pop();
    cout << "Front element after dequeue: " << q.peek() << endl;

    q.pop();

    while (!q.isEmpty()) {
        cout << q.peek() << " is at the front." << endl;
        q.pop();
    }

    q.pop(); // Should show underflow

 
return 0;
}