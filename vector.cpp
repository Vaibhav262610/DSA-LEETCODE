#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    for (int x : v)
    {
        cout << x << endl;
    }
    
    cout<<"size of the vector "<<v.size();

    cout << endl;
}
