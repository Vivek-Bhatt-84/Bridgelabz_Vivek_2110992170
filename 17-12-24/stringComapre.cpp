#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "apple";
    string s2 = "banana";

    int val = s1.compare(s2);

    if(val < 0) {
        cout << "s1 is smaller than s2";
    }
    else{
        cout << "s1 is greater than s2";
    }


    return 0;
}
