// #include<bits/stdc++.h>

// using namespace std;

// // Base class
// class Animal{
// public :
//     void eat(){
//         cout << "This animal can eat. " << endl ;
//     }
// };

// // Derived class
// class Dog : public Animal{
// public : 
//     void bark(){
//         cout << "The dog barks " << endl ;
//     }
// };

// int main()
// {
//     Dog mydog;
//     mydog.eat(); // inhrited from Animal
//     mydog.bark(); // specified to dog 

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

class Base{
public:
    int publicVar;

    void display(){
        cout << "Value of publicVar: " << publicVar << endl;
    }

};

class Derived : public Base{
public:
    void displayMembers(){
        display();
    }

    void modifyMember(int n){
        publicVar = n;
    }
};

int main()
{
    Derived obj ;
    obj.modifyMember(10);
    obj.display();
    return 0;
}
