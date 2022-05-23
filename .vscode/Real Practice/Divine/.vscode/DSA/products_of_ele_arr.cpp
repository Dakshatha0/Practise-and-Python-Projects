// Given an array of integers, return a new array such that each element at index i of
// the new array is the product of all the numbers in the original array except the one
// at i.

// For example, if our input was [ 1, 2, 3, 4, 5], the expected output would be [ 120,
// 60, 40, 30, 24]. Ifourinputwas [3, 2, 1],theexpectedoutputwouldbe [2,
// 3, 6].

#include <iostream>
using namespace std;

int main(){
    int n,arr[n],pro=1;
    int result;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "The elements of array " << i + 1 << ": ";
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        pro *= arr[j] ;
        

    }
        cout << "The product of elements is:  " << pro;
    return 0;
}