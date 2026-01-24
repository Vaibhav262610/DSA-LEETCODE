#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {1, 4, 2, 8, 6};
    cout << largestElement(arr);

    return 0;
}