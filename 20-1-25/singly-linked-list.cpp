#include<bits/stdc++.h>
using namespace std;

struct Node{
public :
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        this -> next = NULL;
        cout << "memory freed with data : " << value << endl;
    }
};

void insertAtHead(Node* &head ,int data){
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;

}
void insertAtTail(Node* &tail ,int data){
    Node* n1 = new Node(data);
    tail -> next = n1;
    tail = n1;
}

void insertAtPos(Node* &head , Node* &tail ,int pos, int data){
    if(pos == 1){
        insertAtHead(head , data);
        return;
    }

    Node* tmp = head;
    int cnt = 1;
    while(cnt != pos - 1){
        tmp = tmp -> next;
        cnt++;
    }


    Node* n2 = new Node(data);
    n2 -> next = tmp -> next;
    tmp -> next = n2;

}

void print(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp -> data << " " ;
        tmp = tmp -> next ;
    }
    cout << endl;
}

void deleteAtPos(Node* &head , int pos){
    if(pos == 1){
        Node* tmp = head;
        head = head -> next;
        delete tmp;
        return;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt != pos ){
            prev = curr;
            curr = curr -> next;
            cnt ++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}
 
int main()
{
    Node* n1 = new Node(10);
    Node* head = n1 ;
    Node* tail = n1;
    // insertAtHead(head,20);
    // print(head);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    print(head);

    insertAtPos(head,tail,3,25);
    print(head);

    deleteAtPos(head,1);
    print(head);

    deleteAtPos(head,3);
    print(head);
 
return 0;
}