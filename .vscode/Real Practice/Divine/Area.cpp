#include <iostream>
using namespace std;
int main(){
    double base, height;
    double area;
    
    cout << "Enter base: ";
    cin >> base ;
    cout << "\nThe height is: ";
    cin >> height;

    area = (base * height)/2;

    cout << "The area is: " << area;
    return 0;
}
