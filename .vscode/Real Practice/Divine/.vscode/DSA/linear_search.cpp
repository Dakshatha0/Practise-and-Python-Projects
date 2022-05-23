#include <iostream>
using namespace std;
    
//Time Complexity : O(n)

int linearsearch(int arr[], int n, int key){
        for(int i =  0; i < n; i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

int main(){
int n;
    cout << "Enter n: ";
    cin >> n;

int arr[n];
    for(int i = 0; i < n;i++){
        cout << "\nPrint elements of array: ";
        cin >> arr[i];
    }

int key;
    cout << "Enter key: \t";
    cin >> key;

    cout << linearsearch(arr,n,key);

    return 0;
}