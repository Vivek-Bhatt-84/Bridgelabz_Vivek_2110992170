#include<bits/stdc++.h>

using namespace std;

int value = 10;

class MyClass{
public:
    static int value ;
    void display(); // Declaration
};

// Defination
void MyClass :: display(){
    cout << "Hello from MyClass!!" << endl ;
}

int MyClass:: value = 40 ;

int main()
{
    int value = 20 ;
    cout << value << endl; // local value 
    cout << ::value << endl; // global value 

    MyClass obj ;
    obj.display();

    cout << MyClass :: value << endl ;

    return 0;
}
