#include<bits/stdc++.h>

using namespace std;

int incrementByOne(int &a){
    return ++a;
}

int main()
{
    int *a = new int(10);
    // *a = 10;
    // int *ptr = &a;
    // a = 10;
    incrementByOne(*a);
    cout << *a; 

    delete a;

    return 0;
}
