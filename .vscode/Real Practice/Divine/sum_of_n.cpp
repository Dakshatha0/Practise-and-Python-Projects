#include <iostream>
using namespace std;
int main(){
    int num, sum=0, i;
    cout << "Enter a number: ";
    cin >> num;
   
    for(i = 1; i <= num; i++){
        sum +=  i;
        cout << "\n The sum of first " << i << " numbers is: " << sum;
    }

/*   while(i <= num){
        snum += i;
        i++;
        cout << " The sum is: " << snum;
    }   
                                             */
    return 0;
}