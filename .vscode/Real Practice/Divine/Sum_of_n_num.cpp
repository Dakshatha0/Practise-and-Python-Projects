#include <iostream>
using namespace std;
int main(){
    int number, sum;

    cout << "Enter a number: ";
    cin >> number;

    sum = (number*(number + 1)) / 2;

    cout << "\nThe sum of n Natural numbers is: "<< sum;
    return 0;
}
