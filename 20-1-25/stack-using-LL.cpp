#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    
};

class Stack{
public:
    Node* top ;

    Stack(){
        top = NULL;
    }

    void push(int x){
        Node* n1 = new Node(x);
        n1 -> next = top;
        top = n1;
        cout << "data pushed into stack " << x << endl;
    }

    void pop(){
        if(top == NULL){
            cout << "stack underflow" << endl;
        }
        Node* tmp = top ;
        top = top -> next;
        cout << tmp -> data << " popped from stack" ;
        delete tmp;
    }

    int peek(){
        if(top == NULL){
            cout << "stack is empty" << endl;
        }
        return top -> data;
    }

    bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }

    ~Stack(){
        while(top != NULL){
            pop();
        }
    }

};
 
int main()
{
     Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element is: " << st.peek() << endl;

    st.pop();
    cout << "Top element after pop is: " << st.peek() << endl;

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    st.pop();
    st.pop();
    st.pop(); // Should show stack underflow
 
return 0;
}