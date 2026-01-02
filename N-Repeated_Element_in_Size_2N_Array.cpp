#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {2,1,2,5,3,2};
    bool foundOne = false;
    int numberFounded = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (arr[i] == arr[j + 1])
            {
                foundOne = true;
                numberFounded = arr[i];
                break;
            }
        }
        if(foundOne){
            break;
        }
    }

    if (foundOne)
    {
        cout << numberFounded;
    }

    return 0;
}