//Armstrong number
#include <iostream>
using namespace std;
int main(){
    int n,b,d=0,r;
    cout << "Enter a number: ";
    cin >> n;
    for(b = n; b > 0; b /= 10){
       r = b % 10;
       d = d+(r*r*r);
    }
    if(d == n){
        cout<<"The given number is an Armstrong number";
    }
    else
    cout << "The give number is not an Armstrong number";
    return 0;
}