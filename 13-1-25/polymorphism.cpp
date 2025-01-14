#include <iostream>

using namespace std;

class Car{
public:
  void start() {
        cout << "Car started" << endl;
    }

    void stop() {
        cout << "Car stopped" << endl;
    }

    void accelerate() {
        cout << "Car is accelerating" << endl;
    }

    
     void coolEngine(){
         cout << "engine is cooled "<< endl;
     }
     void igniteEngine(){
         cout << "engine ignited "<< endl;
     }
};

class Car2{
  

    
    virtual void start() = 0;  
    virtual void stop() = 0;  
    virtual void accelerate() = 0;  
    
};


class Icar : public Car2 {
public:
    void start() override {
        cout << "Car started" << endl;
    }

    void stop() override {
        cout << "Car stopped " << endl;
    }
    
        void accelerate() override {
        cout << "Car accelerated " << endl;
    }

};


int main()
{
    Icar obj  ;
    

    return 0;
}