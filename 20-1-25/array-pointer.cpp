#include <iostream>

using namespace std;

int arr[5]  ;
    
int main()
{
    int *ptr = arr;
    for(int i = 0 ; i < 5 ; i++){
        cout << *ptr << " " ;
        ptr++;
    }

    return 0;
}