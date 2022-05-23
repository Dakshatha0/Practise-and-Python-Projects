#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <array>
using namespace std;
int main(){
    int arr[] = {1,2,4,3};
    int arr2[8] = {1,2};
    int arr3[4] = {1,2,3};
    cout <<"The first value is: " << arr3[1];
    arr2[1] = 4;
    cout << "\n" << arr2[1];
    int arrSize = sizeof(arr)/sizeof(*arr);
    cout << "\n" << arrSize;
    for(int i =0; i <=arrSize; i++){
        cout << "\n" << arr[i];
    }
    return 0;
}
