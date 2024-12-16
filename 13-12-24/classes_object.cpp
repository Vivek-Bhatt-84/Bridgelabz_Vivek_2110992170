#include<bits/stdc++.h>
using namespace std;

class Car{
public :
    string brand ;
    string model;
    int yr;

    Car(){

    }

    Car(string b , string m , int yr){
        this->brand = b;
        this->model = m;
        this->yr = yr;        
    }

    void displayInfo(){
        cout << "brand : " << brand << " model : " << model << " year : " << yr << endl;
    }

};

int main()
{
    // Car car1 ;
    // car1.brand = "Toyota";
    // car1.model = "corolla";
    // car1.yr = 2020;

    // car1.displayInfo();

    Car car2("Toyota","Corolla",2015);
    car2.displayInfo();

    Car* car3 = new Car("ABC","iosjk",2013);
    car3->displayInfo();

    delete car3;

    return 0;
}
