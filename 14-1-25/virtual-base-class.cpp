#include<bits/stdc++.h>

using namespace std;

class A{

public:
    void show(){
        cout << "Hello world" <<  endl;
    }
};

class B : public virtual A{

};

class C : virtual public A{

};

class D : public B, public C{

};

int main()
{
    D obj ;
    obj.show();
    return 0;
}
