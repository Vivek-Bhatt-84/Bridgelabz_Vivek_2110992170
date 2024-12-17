#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "geeksforgeeks";

    

    char* p = &str[0];

    while(*p != '\0'){
        cout << *p ;
        *p++;
    }

    return 0;
}
