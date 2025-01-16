#include<bits/stdc++.h>

using namespace std;


void merge2SortedArrays(vector<int>& arr , int l ,int mid, int h){
    vector<int> tmp ;
    int left = l ;
    int right = mid + 1;

    while(left <= mid && right <= h){
        if(arr[left] < arr[right]){
            tmp.push_back(arr[left]);
            left ++;
        }
        else{
            tmp.push_back(arr[right]);
            right ++;
        }
    }

    
    while (left <= mid) {
        tmp.push_back(arr[left]);
        left++;
    }


    while (right <= h) {
        tmp.push_back(arr[right]);
        right++;
    }

    for(int i = l ; i <= h ; i++){
        arr[i] = tmp[i - l];
    }

}

void mergeSort(vector<int>& arr , int l , int h){
    if(l >= h) return;
    int mid = l + (h - l) / 2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid + 1 ,h);
    merge2SortedArrays(arr,l,mid,h);
}
int main()
{
    vector<int> v = {3,2,8,5,1,4,23};
    mergeSort(v,0,v.size() - 1);

    for(auto i : v ){
        cout << i << " " ;
    }

    return 0;
}
