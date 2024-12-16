#include<bits/stdc++.h>

using namespace std;

int square1(int x){
    return x *= x;
}

int square2(int *x){
    return *x *= *x;
}

int square3(int& x){
    return x *= x;
}

int main()
{
    int x1 = 4;

    cout << "address of x1 in main(): " << &x1 << endl;
    cout << "Square of x1: " << square1(x1) << endl;
    cout << "No change in x1: " << x1 << endl;

    int x2 = 8 ;
    cout << "address of x2 in main(): " << &x2 << endl;
    square2(&x2);
    cout << "Square of x2: " << x2 << endl;
    cout << "Change reflected in x2: " << x2 << endl;

    int x3 = 3;
    cout << "address of x3 in main(): " << &x3 << endl;
    square3(x3);
    cout << "Square of x3  : " << x3 << endl ;
    cout << "changes reflected in x3 : " << x3 << endl;
    


    
    return 0;
}
