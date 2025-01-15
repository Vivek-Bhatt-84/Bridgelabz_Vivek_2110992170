#include<bits/stdc++.h>

using namespace std;

//base class
class Engine{
public:
    void startEngine(){
        cout << "Engine started." << endl;
    }
};

//base class 2
class Wheels{
public:
    void rollWheels(){
        cout << "Wheels are rolling ." << endl;
    }
};

// derived class
class Car : public Engine ,public Wheels{
public:
    void drive(){
        cout << "Car is driving " << endl;
    }
};

int main()
{
    Car myCar;
    myCar.startEngine();
    myCar.rollWheels();
    myCar.drive();
    

    return 0;
}
