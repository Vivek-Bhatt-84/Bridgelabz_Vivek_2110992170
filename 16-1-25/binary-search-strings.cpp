#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<string>& v , string key){
    int s = 0 , e = v.size() - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(key == v[mid]){
            return mid;
        }
        else if(key < v[mid]){
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
    vector<string> v = { "apple", "banana", "cherry", "date", "fig", "grape", "kiwi" };
    string key ;

    cout << "Enter key to search" << endl;
    cin >> key ;

    sort(v.begin(),v.end());
    int result = binarySearch(v,key);

    if(result == 0) {
        cout << "Not found" << endl;
    }
    else{
        cout << "found at index " << result << endl;
    }

    return 0;
}
