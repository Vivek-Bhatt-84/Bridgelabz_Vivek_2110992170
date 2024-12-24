#include<bits/stdc++.h>

using namespace std;

class Hero{

    public : 
    int health ;
    char lvl ;

     void print(){
        cout << health << endl ;
     }
};

int main()
{
    Hero h1 ;
    h1.health = 60 ;
    h1.lvl = 'S';
    cout << "Health is : " << h1.health << endl ;
    cout << "Level is : " << h1.lvl << endl ;

    return 0;
}

