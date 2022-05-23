#include <iostream>
#include <string>
using namespace std;
int main(){
    int num1, num2;
    string num3;

    cout << "\nEnter num1: ";
    cin >> num1;
    cout << "\nEnter num2: ";
    cin >> num2;

    num3 = (num1 > num2) ? "\nnum1 is greater than num2" : "num2 is greater than num1";
    cout << num3;

    //OR---------
    int a,b,c,d;
    cout << "\nEnter a: ";
    cin >> a;
    cout << "\nEnter b: ";
    cin >> b;
    cout << "\nEnter c: ";
    cin >> c;

    //***************
    d = ((a > b) && (a > c)) ? a: (b > c) ? b : c;
    //***************
    cout << "\nMax is: " << d;
    return 0; 
}
