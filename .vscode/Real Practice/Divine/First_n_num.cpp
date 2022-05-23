#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "\nThe first n natural numbers are: " << i;
    }
    return 0;
}