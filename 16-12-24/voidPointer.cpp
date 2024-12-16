#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 4;
    float y = 5.5;

    void* ptr;
    ptr = &x;

    cout << "Integer variable through void pointer : " << *((int*)ptr) << endl; 

    ptr = &y;
    cout << "Float variable through void pointer :  " << *((float*)ptr) << endl;

    return 0;
}
