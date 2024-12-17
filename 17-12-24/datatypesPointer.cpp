#include <iostream>
using namespace std;

int main() {
    // Integer Pointer
    int a = 10;
    int* ptr1 = &a;
    cout << "Integer Pointer address  : " << ptr1 << endl;
    cout << "Integer Pointer value    : " << *ptr1 << endl;

    // Character Pointer
    char b = 'v';
    char* ptr2 = &b;
    cout << "Character Pointer address: " << (void*)ptr2 << endl; 
    cout << "Character Pointer value  : " << *ptr2 << endl;

    // Float Pointer
    float f = 9.8;
    float* ptr3 = &f;
    cout << "Float Pointer address    : " << ptr3 << endl;
    cout << "Float Pointer value      : " << *ptr3 << endl;

    // Double Pointer
    double d = 20.25;
    double* ptr4 = &d;
    cout << "Double Pointer address   : " << ptr4 << endl;
    cout << "Double Pointer value     : " << *ptr4 << endl;

    // Boolean Pointer
    bool flag = true;
    bool* ptr5 = &flag;
    cout << "Boolean Pointer address  : " << (void*)ptr5 << endl; // Cast to void*
    cout << "Boolean Pointer value    : " << *ptr5 << endl;

    // Short Pointer
    short s = 5;
    short* ptr6 = &s;
    cout << "Short Pointer address    : " << ptr6 << endl;
    cout << "Short Pointer value      : " << *ptr6 << endl;

    // Long Pointer
    long l = 1234567890;
    long* ptr7 = &l;
    cout << "Long Pointer address     : " << ptr7 << endl;
    cout << "Long Pointer value       : " << *ptr7 << endl;

    // Void Pointer
    void* ptr8 = &a; // Void pointer can point to any data type
    cout << "Void Pointer address     : " << ptr8 << endl;

    int x = -10; // Signed integer
    int* ptr9 = &x;
    cout << "Signed Integer Pointer address : " << ptr9 << endl;
    cout << "Signed Integer Pointer value   : " << *ptr9 << endl;

    // Unsigned Integer Pointer
    unsigned int ua = 10; // Unsigned integer (cannot hold negative values)
    unsigned int* ptr10 = &ua;
    cout << "Unsigned Integer Pointer address: " << ptr10 << endl;
    cout << "Unsigned Integer Pointer value  : " << *ptr10 << endl;

    return 0;
}
