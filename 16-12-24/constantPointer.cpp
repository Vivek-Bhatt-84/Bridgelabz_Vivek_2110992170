#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 34;
    int y = 54;

    int* const ptr = &x;
    cout << *ptr << endl;

    *ptr = 56 ; 
    // ptr = &y; error 
    cout << *ptr << endl;

    return 0;
}
