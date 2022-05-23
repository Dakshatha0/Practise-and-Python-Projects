#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,determinant;
    int Root1, Root2;
    cout << "The value of a is: ";
    cin >> a;
    cout <<"the value of b is: ";
    cin >> b;
    cout << "The value of c is: ";
    cin >> c;

    determinant = b*b - 4*a*c;
    if(determinant < 0){
        cout << "Roots are real and distinct";
         Root1 = (-b + sqrt(determinant))/2*a;
         Root2 = (-b - sqrt(determinant))/2*a;
         cout << "\nRoot1: " << Root1;
         cout << "\nRoot2: " << Root2;

    }
    else if(determinant > 0){
        cout << "Roots are imaginary";
    }
    else
     {
         cout << "Roots are real and equal";
         Root1 = Root2 = (-b) / (2*a);
         cout << "\nRoots are: " << Root1 << ",\n" << Root2;
     }
   
    return 0;
}
