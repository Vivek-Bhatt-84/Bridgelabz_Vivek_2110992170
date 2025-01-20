#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int size;
    int top;
    int* arr;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele){
        if( size - top > 1){
            arr[++top] = ele;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top > 0 ){
            top -- ;
        }
        else{
            cout << "stack underflow" << endl;
        }

    }

    int peek(){
        return (top == -1) ? 0 : arr[top] ;
    }

    bool isEmpty(){
        return (top == -1 ) ? 1 : 0 ;
    }

   
};
 
int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    cout << st.isEmpty();

 
return 0;
}