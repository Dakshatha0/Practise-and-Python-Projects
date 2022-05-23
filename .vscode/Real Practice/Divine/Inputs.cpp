#include <iostream>
#include <string>
using namespace std;
int main(){
    string sQuestion1("Enter a number 1: ");
    string sQuestion2("Enter a number 2: ");

    // Create empty strings to store values
    string sNum1, sNum2;
    cout << sQuestion1;
    cin >> sNum1;
    cout << sQuestion2;
    cin >> sNum2;

    // Convert from strings to int
    // stod converts from strings to doubles
    int nNum1 = stoi(sNum1);
    int nNum2 = stoi(sNum2);  
    printf("%d + %d = %d\n",nNum1,nNum2,(nNum1 + nNum2));
    printf("%d - %d = %d\n",nNum1,nNum2,(nNum1 - nNum2));
    printf("%d * %d = %d\n",nNum1,nNum2,(nNum1 * nNum2));
    printf("%d / %d = %d\n",nNum1,nNum2,(nNum1 / nNum2));
    return 0;
}
