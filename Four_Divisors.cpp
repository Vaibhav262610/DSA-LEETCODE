#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2] = {21, 21};
    int totalSum = 0;

    for (int i = 0; i < 2; i++)
    {
        int factorCount = 0;
        int currSum = 0;

        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                factorCount++;
                currSum += j;
            }
        }

        if (factorCount == 4)
        {
            totalSum += currSum;
        }
    }

    cout << totalSum;
    return 0;
}
