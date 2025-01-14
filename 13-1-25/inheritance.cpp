#include <iostream>
using namespace std;

// Base Class 1
class Animal {
public:
   virtual void eat() {
        cout << "Animal eat food" << endl ;
    }
};

// Base Class 2
class Dog {
public:
    void eat()  {
        cout << "dog eats" << endl;
    }
};

// Derived Class
class Puppy : public Animal , public Dog {
public:
    void eat() override {
        cout << "The puppy eats food." << endl;
    }
};

int main() {
    Dog myPuppy;
    myPuppy.eat();  // Inherited from Animal
   

    return 0;
}
