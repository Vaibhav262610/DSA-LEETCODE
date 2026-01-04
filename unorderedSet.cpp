// #include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i); // insert() adds a new element to the set
    }
    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; // Dereference iterator to access the element
    }
    cout << endl;
}
