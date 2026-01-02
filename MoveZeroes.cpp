#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0,1,0,3,12};
    int ArrSize = sizeof(arr)/sizeof(arr[0]);
     int index = 0;

    for(int i = 0; i < ArrSize; i++) {
        if(arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while(index < ArrSize) {
        arr[index++] = 0;
    }

    
    for(int i =0; i<ArrSize;i++){
      cout<<arr[i];  
    };
    
    

    return 0;
}