#include <iostream>
#include <climits>
using namespace std;
int main(){

    int num;
    cout << "Enter number of elements in the array: ";
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++){
    cout << "\nEnter all the elements: ";
    cin >> arr[i];
    }
    int maxNo = INT_MIN,minNo = INT_MAX;
    for(int i = 0 ;i < num; i++){
        if(arr[i] > maxNo){
            maxNo = arr[i];
        }
        if(arr[i] < minNo){
            minNo = arr[i];
        }
        // maxNo = max(maxNo,arr[i]);
        // minNo = min(minNo,arr[i]);
    }
    cout << " " << maxNo << " " << minNo << " ";
    
    
    return 0;
}