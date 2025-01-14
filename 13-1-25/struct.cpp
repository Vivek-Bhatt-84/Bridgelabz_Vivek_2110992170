#include<bits/stdc++.h>

using namespace std;

struct employee{
    int eId ;
    float salary ;
};

int main()
{
    struct employee vivek;
    vivek.salary = 120000000;
    vivek.eId = 29;
    cout << "value : " << vivek.salary << endl ;
    cout << "value : " << vivek.eId << endl ;

    return 0;
}
