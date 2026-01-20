#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 5, 9, 2, 8};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int j = 0; j < 5; j++)
    {
        cout << arr[j];
    }
}
