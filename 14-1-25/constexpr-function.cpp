#include<bits/stdc++.h>

using namespace std;

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n-1); 
}

int main()
{
    int compileTime = factorial(5) ; // evaluated at compile time
    cout << "Evaluated at compile time  " << compileTime << endl ;
     
    int runTime = 6 ; 
    int runtimeresult = factorial(runTime);
    cout << "Evaluated at run time  " << runtimeresult << endl ;

    return 0;
}
