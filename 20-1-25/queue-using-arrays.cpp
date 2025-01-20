#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int size;
    int front ;
    int* arr;

    Queue(int size){
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    void push(int ele){
        if(rear == size - 1){
            cout << "Queue is full" << endl;
        }
        arr[++rear] = ele;
        cout << ele << " inserted in queue " << endl;
    }

    void pop(){
        if(isEmpty()) {
            cout << "Queue is empty " << endl;
        }
        for(int i = front ; i < rear ; i++){
            arr[i] = arr[i+1];
        }
        rear--;
    }

    int peek(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return front > rear;
    }
};
 
int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front element: " << q.peek() << endl;

    q.pop();
    cout << "Front element after dequeue: " << q.peek() << endl;

    q.enqueue(60); // Should fail because there's no room left (no circular indexing)

    while (!q.isEmpty()) {
        cout << q.peek() << " is at the front." << endl;
        q.pop();
    }

    q.pop(); // Should show underflow
 
return 0;
}