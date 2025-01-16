#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v  = {1,2,3,4,5,6,7,8,9};
    int key = 7;

    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == key){
            cout << i << endl;
            break;
        }
    }


    return 0;
}
