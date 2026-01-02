#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }

        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    cout << "Majority element = " << candidate;
    return 0;
}
