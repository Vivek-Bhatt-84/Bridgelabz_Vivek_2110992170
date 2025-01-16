#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>& v , int key){
    int s = 0 , e = v.size() - 1;

    while(s <= e){
        int mid  = s + (e - s) / 2;
        if(v[mid] == key){
            return mid;
        }
        else if(key < v[mid] ){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return 0;

}

int main()
{
    vector<int> v = {2, 3, 4, 10, 40};
    int key = 10 ;
    int idx = binarySearch(v,key);

    if(idx == 0){
        cout << "key not found" << endl;
    }
    else{
        cout << " key found at index " << idx << endl;
    }


    return 0;
}
