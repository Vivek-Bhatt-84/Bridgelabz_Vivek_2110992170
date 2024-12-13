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

    // Car car2("")

    return 0;
}
