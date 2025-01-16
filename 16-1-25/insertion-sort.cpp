#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& v){

    for(int i = 1 ; i < v.size() ; i++){
        int pivot = v[i];
        int j = i - 1;
        while(j >= 0 && pivot < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivot;
    }

}

int main()
{
    vector<int> v = { 12, 11, 13, 5, 6 };
    insertionSort(v);

    for(auto i : v) {
        cout << i << " " ;   
    }

    return 0;
}
