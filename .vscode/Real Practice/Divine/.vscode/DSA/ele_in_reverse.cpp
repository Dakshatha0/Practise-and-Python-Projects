#include <iostream>
using namespace std;
#define MAX 1000
int main(){
    int num ;
    float a[MAX];
    cout << "Enter the number of elements in an array: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        cout << "The elements of array " << i + 1 << ": ";
        cin >> a[i];
    }
    for(int i = num-1; i >= 0; i--){
        cout << a[i] << "\n"; 
    }
    return 0;
}