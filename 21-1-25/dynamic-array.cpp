#include <bits/stdc++.h>
using namespace std;

class DynamicArray {
public:
    int size;
    int cap;
    int* arr;

    DynamicArray(int initialSize) {
        this->size = 0;
        this->cap = initialSize;
        arr = new int[cap];
    }

    void resize() {
        cap = cap * 2;
        int* newArray = new int[cap];
        for (int i = 0; i < size; ++i) {
            newArray[i] = arr[i];
        }
        delete[] arr;
        arr = newArray;
    }

    void add(int ele) {
        if (size == cap) {
            resize();
        }
        arr[size++] = ele;
    }

    void remove() {
        if (size > 0) {
            --size;
        }
    }

    int get(int ind) {
        return arr[ind];
    }

   
};

int main() {
    DynamicArray da(2);

    da.add(10);
    da.add(20);
    da.add(30);

    cout << "Array elements: ";
    for (int i = 0; i < da.size; ++i) {
        cout << da.get(i) << " ";
    }
    cout << endl;

    da.remove();
    cout << "After removal, size: " << da.size << endl;

    return 0;
}
