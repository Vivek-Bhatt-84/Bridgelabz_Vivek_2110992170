#include<bits/stdc++.h>

using namespace std;

class Base1
{
public:
    void greet(){
        cout << "How are you ? " << endl;
    }

};

class Base2
{
public:
    void greet(){
        cout << "Kaise ho ? " << endl;
    }

};

class Derived1 : public Base1 , public Base2
{
    int a;
public :
    void greet(){
        Base1 :: greet();
    }

};

int main()
{
    Derived1 obj;
    obj.greet();

    return 0;
}
