#include<bits/stdc++.h>

using namespace std;

class Hero{

private : 
    int health ;


public :
    char lvl ;

    void print(){
        cout << lvl << endl ; 
    }

    int getHealth() {
        return health ;
    }

    void setHealth(int h){
        health = h ;
    }

    int getLevel(){
        return lvl;
    }
    void setLevel(char c){
        lvl = c ;
    }

};

int main()
{
    Hero h1 ;
    cout << "h1 health : " << h1.getHealth() << endl ;
    // h1.health = 60 ;
    // use setter
    h1.setHealth(70);
    h1.lvl = 'S' ;
    cout << "Health is : " << h1.getHealth() << endl ;
    cout << "Level is : " << h1.lvl << endl ;

    return 0;
}

