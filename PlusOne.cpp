#include <iostream>
using namespace std;

int main()
{
    int Arr[] = {};
    const int ArrLength = sizeof(Arr) / sizeof(Arr[0]);
    for (int i = 0; i < ArrLength; i++)
    {
        cin >> Arr[i];
        Arr[i] += 1;
        
    }
    cout << Arr[0] << endl;
}