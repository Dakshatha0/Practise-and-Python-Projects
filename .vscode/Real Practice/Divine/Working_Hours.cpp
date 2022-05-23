#include <iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter hours: ";
    cin >> hour;

    if(hour >= 9 && hour <= 15){
        cout << "Working hours are perfect.";
    }
    else{
        cout << "Not allowed to work after or before hours";
    }
    return 0;
}
