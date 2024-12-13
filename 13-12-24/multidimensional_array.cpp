#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int mat[3][3];
    int mat[2][2] = {
        {1,2},
        {3,4}
    };

    cout << mat[0][1];

    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        cout << mat[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}
