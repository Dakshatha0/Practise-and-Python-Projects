#include <iostream>
using namespace std;
int main(){
    int number, R, divv;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter divv: ";
    cin >> divv;
    
    if(number > 0){
        cout << "\nValidating the number...";
        R = divv/number;
        cout << "\nAfter validating.." << "\n" << R;
    }
    else{
        cout << "\nNumber not allowed. Input a number greater than '0' ";
    }
    return 0;
}
