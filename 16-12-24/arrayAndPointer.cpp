#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3] = {100,200,300};
    int* ptr = arr;

    for(int i = 0 ; i < 3 ; i++){
        cout << "arr[" << i+1 << "] : " << *ptr << endl;
        ptr++;
    }

    return 0;
}
