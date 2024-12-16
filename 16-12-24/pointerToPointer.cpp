#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a = 'b';
    char* b = &a;
    char** c = &b;

    cout << a << endl;
    cout << *b << endl;
    cout << **c << endl;

    return 0;
}
