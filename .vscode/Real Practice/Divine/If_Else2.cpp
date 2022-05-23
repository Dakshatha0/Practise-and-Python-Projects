#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){

// ----- CONDITIONAL OPERATORS -----
// Conditional operators help you to perform
// different actions depending on conditions
// ==, !=, <, >, <=, >=

// ----- LOGICAL OPERATORS -----
// Logical operators allow you to combine conditions
// && : If both are true it returns true
// || : If either are true it returns true
// ! : Converts true into false and vice versa
    string sAge = "0";
    int nGrade = 0;
    cout << "Enter your age: \n";
    cin >> sAge;
    int nAge = stoi(sAge);
    if(nAge == 5){
        cout << "Go to Kindergarten\n";
    }
    else if(nAge > 17){
        cout << "Go to college\n";
    }
    else if((nAge > 5) && (nAge <= 18)){
        nGrade = nAge - 5 ;
        cout << "your grade is " << nGrade ;
    }
    else if((nAge < 5)){
        cout << "Too young for school\n";
    }

//Ternary operator
    
// A ternary operator works like a compact if else
// statement. If the condition is true the first
// value is stored and otherwise the second
    int Age ;
    cout << "\nEnter age again: ";
    cin >> Age;
    bool canIvote = (Age >= 18) ? true : false;
// Shows bool values as true or false
    cout.setf(ios::boolalpha);
    cout << "\nCan Derek Vote? : " << canIvote << endl;
    
    return 0;
}
