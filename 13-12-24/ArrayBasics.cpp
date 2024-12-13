#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    // int  nums[5] = {23,34,54,7,12};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << numbers[0];
    cout << numbers[4];
    numbers[2] = 100;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}
