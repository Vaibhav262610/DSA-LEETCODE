// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 1, 1, 0, 1, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int count = 1;
//     int storeCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             count++;
//             cout << "number found with count= " << count << endl;
//         }
//         else
//         {
//             // cout << "number not found with count= " << count << " a[i]= " << i << endl;
//             cout<<"store count= "<<storeCount<<endl;
//             if (i != n - 1)
//             {
//                 cout<<"this happens when i= "<<i<<endl;
//                 storeCount = count;
//                 count = 1;
//             }
//         }
//     }
//     if (storeCount < count)
//     {
//         cout << "max cons number: " << count;
//     }
//     else
//     {
//         cout << "max store cons number: " << storeCount;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    cout << "Max consecutive 1s = " << maxCount;
    return 0;
}
