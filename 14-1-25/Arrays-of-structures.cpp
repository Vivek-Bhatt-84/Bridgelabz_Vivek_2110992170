#include<bits/stdc++.h>

using namespace std;

struct Student{
    int id ;
    string name;
    float marks;
};

int main()
{
    //Arrays of struuctures
    Student students[3];

    // input values 
    for(int i = 0 ; i < 3 ; i++){
        cout << "Enter details for student " << i + 1 << " (ID, Name, Marks): ";
        cin >> students[i].id >> students[i].name >> students[i].marks ; 
    }

    // display details 
    for(int i = 0 ; i < 3 ; i++){
        cout << "Student " << i + 1 << ": ";
        cout << "ID=" << students[i].id << ", Name=" << students[i].name << ", Marks=" << students[i].marks << endl;
    }


    return 0;
}
