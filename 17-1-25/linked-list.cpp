#include<bits/stdc++.h>

using namespace std;

struct Node{
public :
    int data;
    Node* next ;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
       this -> next = NULL;
        cout << "Memory freed with value " << value << endl;
    }
};

void insertAtHead(Node* &head , int val){
    Node* n1 = new Node(val);
    n1 -> next = head;
    head = n1;
}

void print(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp -> data << " " ;
        tmp = tmp -> next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail,int val){
    Node* node1 = new Node(val);
    tail -> next = node1;
    tail = node1;
}

void insertAtPos(Node* &tail,Node* &head , int pos , int val){
    if(pos == 1){
        insertAtHead(head,val);
        return;
    }

    Node* tmp = head;
    int cnt = 1;
    while(cnt != pos - 1){
        tmp = tmp -> next;
        cnt ++;
    }

    if(tmp -> next == NULL){
        insertAtTail(tail,val);
        return;
    }

   

    Node* nodeToInsert = new Node(val);
    nodeToInsert -> next = tmp -> next;
    tmp -> next = nodeToInsert;
}

void deleteAtPos(Node* &head ,int pos){
    if(pos == 1){
        Node* tmp = head ;
        head = head -> next;
        delete tmp;
        return ;
    }

    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;

        while(cnt != pos ){
        prev = curr;
        curr = curr -> next;
        cnt++ ;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr ;

    }

}
int main()
{
    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;
    print(head);

    // insertAtHead(head,12);
    // print(head);

    // insertAtHead(head,15);
    // print(head);

    insertAtTail(tail,20);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insertAtPos(tail ,head,4,15);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    deleteAtPos(head,3);
    print(head);

    return 0;
}
