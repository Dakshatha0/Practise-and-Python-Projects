#include <iostream>
using namespace std;
int main(){
    int units;
    float charge,charge1,charge2,charge3,charge4;
    cout << "Enter units: ";
    cin >> units;

    if(units > 0 && units <=200){
        int charge1 = (0.5 * units);
        cout << "\nThe charges are: "<< charge << endl;
    }
    else if(units >=201 && units <=400){
        int charge2 = charge1 + (0.65*units) ;
        cout << "\nThe charges are: " << charge2;
    }
    else if(units >=401 && units <=600){
        int charge3 = charge2 + (0.80*units) ;
        cout << "\nThe charges are: " << charge3;
    }
    else{
        int charge4 = charge3 + (0.90 * units);
        cout << "\nThe charges are: " << charge4;
    }
      
}
