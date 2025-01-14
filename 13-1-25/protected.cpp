#include <iostream>

using namespace std;

class Car {
protected:
    string protectedVariable = "I am a protected variable"; // Protected variable

public:
    void showProtectedVariable() {
        cout << "Access from Base Class: " << protectedVariable << endl;
    }
};

class Car2 : public Car {
public:
    void accessProtectedVariable() {
        cout << "Access from Child Class: " << protectedVariable << endl;
    }
};

// Non-child class
class NonChildClass {
public:
    void tryAccessProtectedVariable() {
       
        cout << "NonChildClass cannot directly access protected variable." << endl;
    }
};

int main() {
    // Create objects
    Car baseCar;
    Car2 sportsCar;
    NonChildClass nonChild;

    baseCar.showProtectedVariable();

    
    sportsCar.accessProtectedVariable();  

   
    nonChild.tryAccessProtectedVariable(); 
    return 0;
}
