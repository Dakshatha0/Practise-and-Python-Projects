#include <iostream>
using namespace std;
int main(){
    int num;
    float arr[20];
    cout << "Enter number of elements in the array:  ";
    cin >> num;

    cout << "\nEnter elements of the array: ";
    for(int i = 0; i < num; i++){
        cout << "\nElements of array " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i = 1; i < num; i++){
        if(arr[0] > arr[i]){
            arr[0] = arr[i];
        };
    cout << "\nSmallest element: " << arr[0];
    }
    return 0;
}