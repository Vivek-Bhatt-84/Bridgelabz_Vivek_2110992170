#include<bits/stdc++.h>

using namespace std;

int main()
{
    int high = 100;
    int low = 50;

    const int* ptr = &high;
    cout << *ptr << endl;
    // *ptr = 78;  error -> 

    ptr = &low;
    cout << *ptr ; 


    return 0;
}
