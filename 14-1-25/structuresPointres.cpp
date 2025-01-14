#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x , y ;
};

int main()
{
    Point p1 = {10,20};
    Point* ptr = &p1;

    cout << "X: " << ptr->x << " "  << "Y : " << ptr->y << endl;

    return 0;
}
