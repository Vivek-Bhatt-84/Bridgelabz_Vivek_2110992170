#include<bits/stdc++.h>

using namespace std;

int bubbleSort(vector<int>& v){

    int cnt = 0;
    for(int i = 0 ; i < v.size() - 1 ; i++){
        // cnt ++;
        for(int j = 0 ; j < v.size() - i - 1 ; j++){

            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                cnt ++;
            }
        }
    }
    return cnt ;
}

int main()
{
    vector<int> v = {5, 1, 4, 2, 8};

    int n = bubbleSort(v);
    for(auto i : v){
        cout << i << " " ;
    }
    cout << endl;

    cout << "no of swaps = " << n << endl;

    return 0;
}
