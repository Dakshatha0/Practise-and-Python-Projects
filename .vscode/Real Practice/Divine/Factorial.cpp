#include <iostream>
using namespace std;
int main(){
    int number, i, factorial;
    cout << "Enter a number: ";
    cin >> number;

    i = 1;
    factorial = 1;

    while(i <= number){
         factorial *= i;
         i++;
    }

    cout << " The factorial of " << number <<" is " << factorial;
    return 0;
}