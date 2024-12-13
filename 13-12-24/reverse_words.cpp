#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "The quick brown fox";

    stringstream ss(s);
    vector<string> v ;
    string word;

    while(ss >> word){
        v.push_back(word);
    }

    // reverse(v.begin(),v.end());
   int i = 0 ;
   int j = v.size() - 1;
   while(i <= j){
    swap(v[i],v[j]);
    i++;
    j--;
   }
    for(const string& s : v){
        cout << s << " ";
    }

    return 0;
}
