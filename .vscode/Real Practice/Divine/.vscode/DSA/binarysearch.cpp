#include <bits/stdc++.h>
using namespace std;

//Time Complexity: O(logn)

int binarySearch(int arr[], int n, int key){
    int start = 0; 
    int end = n-1;

    while(start <= end){
        int mid = ( start + end )/ 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }

        else{
            end = mid + 1;
        }
    }
       return -1;
}

int main(){
    int n;
    cout << "Enter num of elements: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0;i < n; i++){
        cout << "Elements are: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << binarySearch(arr,n,key)<<endl;
    return 0;
}