#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    //If a Birtdhay is important or not.
    string sAge = "0";       //mention string in "".
    cout << "Enter your birthday: ";
    cin >> sAge;
    int nAge = stoi(sAge);
    if((nAge >= 1) && (nAge <= 18)){
        cout << "Important Birthday";
    }
    else if((nAge == 21) || (nAge == 50)){
        cout << "Important Birthday";
    }
    else if(nAge >= 65){
        cout << "Important Birthday";
    }
    else{
        cout << "Not an Important Birthday";
    }
       return 0;

}
