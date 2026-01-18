#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 1, 3, 2};
    int n = 5;
    int hash[11] = {0};

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int queries[5] = {1, 3, 4, 2, 10};

    for(int i = 0; i < 5; i++) {
        cout << "Count of " << queries[i] << " = " << hash[queries[i]] << endl;
    }

    return 0;
}
