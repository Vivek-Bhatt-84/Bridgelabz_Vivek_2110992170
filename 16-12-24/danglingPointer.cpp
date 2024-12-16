#include<bits/stdc++.h>

using namespace std;

int main()
{
    int* ptr = new int(5);
    delete ptr ; // dangling pointer

    ptr = NULL;



    return 0;
}
