#include<bits/stdc++.h>
using namespace std;
void update(int *p){
    *p = *p + 1;
}

int getSum(int arr[] , int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int num = 5;
    // cout << "address of num " << &num << endl ;
    // int *ptr = &num;
    // cout << ++*ptr << endl;
    // cout << num ;

    // int *p ; // pointing to some garbage address

    // int arr[5] = {1,2,2,3,5};
    // cout << arr;

    int value = 5 ;
    int *p = &value;

    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;

    // arrays
    int arr[5] = {1,2,2,3,5};
    cout << "sum " << getSum(arr,5);


    return 0;
}
