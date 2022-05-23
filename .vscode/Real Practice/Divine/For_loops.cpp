#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    for(int i=0;i<=10;++i){
        cout << "\nThe values of i are: "<< i;
    }
    int arr[]  ={1,2,3};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i < arrSize;++i){
        cout << "\n" << arr[i] <<endl;
    }
    for(auto x:arr) cout << "\n" << x;

    int num = 5;
    string isEven = (num % 2 == 0) ? "Even" : "Odd";
    cout << "\nThe number is : "<< isEven;

    //All odd numbers from 1 to 20.
    for(int j = 0; j <= 20; ++j){
        if((j % 2) != 0){
           cout << "\n" << j;
        }
        
    }
    return 0;
}
