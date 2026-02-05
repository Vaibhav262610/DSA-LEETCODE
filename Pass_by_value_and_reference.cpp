#include <bits/stdc++.h>
using namespace std;

void inc(int &n)
{
    n = n + 1;
    cout << n;
}

int main()
{
    int a = 5;
    inc(a);
    cout<<a;

    return 0;
}