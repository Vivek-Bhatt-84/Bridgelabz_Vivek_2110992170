#include<bits/stdc++.h>
using namespace std;

class DynamicArray{
public:
    int size;
    int* arr;
    int cap;

    DynamicArray(int size){
        this -> size = size;
        arr = new int[size];
    }

    void resize(){
        cap = cap * 2;
        int* newArray = new int[cap];

        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }

        delete arr[];
        arr = newArray;

    }

    void add(int ele){
        if(size == cap){
            resize();
        }
        arr[size++] = ele;
    }

    void remove(){
        --size;
    }

    int get(int ind){
        return arr[ind];
    }

};
 
int main()
{
 
return 0;
}