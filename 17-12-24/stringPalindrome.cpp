#include<bits/stdc++.h>

using namespace std;

bool checkPaindrome(string str){
    int i = 0 ; 
    int j = str.length() - 1;

    while(i <= j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str = "ababab";

    if(checkPaindrome(str)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << " Not Palindrome" << endl;
    }

    return 0;
}
