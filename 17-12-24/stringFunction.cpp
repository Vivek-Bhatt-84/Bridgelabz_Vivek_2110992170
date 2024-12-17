#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "Hello World!";
    string str2 = "geek";

    cout << str.length() << endl;

    swap(str,str2);
    cout << "str : " << str <<  " " <<  "str2  : " << str2 << endl;

    cout << str.size() << endl;

    str.push_back('h');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    // str.clear();
    // cout << str;

    



    return 0;
}
