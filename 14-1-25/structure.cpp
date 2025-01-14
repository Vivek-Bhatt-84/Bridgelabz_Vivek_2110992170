#include<bits/stdc++.h>

using namespace std;

struct Student{
    int id ;
    string name ;
    float marks ;

    // member function 
    void display(){
       cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }

};


int main()
{
    // create structure variable 
    Student s1 ;

    // Assign values to members
    s1.id = 101;
    s1.name = "John Doe";
    s1.marks = 87.5;

    // display student details
    s1.display();
    

    return 0;
}
