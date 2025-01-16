#include<bits/stdc++.h>

using namespace std;
void selectionSort(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        int min_idx = i ;
        for(int j = i + 1 ; j < v.size() ; j++){
            if(v[j] < v[min_idx]){
                min_idx = j;
            }
        }
        swap(v[min_idx],v[i]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);
    for(auto i : arr){
        cout << i << " " ;
    }
    
    return 0;
}
