#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

void SelectionSort(int arr[])
{
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
}

void printArr(int arr[])
{
    SelectionSort(arr);
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j];
    }
}

int main()
{
    int arr[5] = {7, 5, 9, 2, 8};
    printArr(arr);
}
