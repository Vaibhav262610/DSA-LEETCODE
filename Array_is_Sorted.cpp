#include <bits/stdc++.h>
using namespace std;

void sortedArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
};

int main()
{
    vector<int> arr = {1, 4, 2, 6, 8, 3};
    int n = 6;
    sortedArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}