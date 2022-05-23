#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num == 1){
          return false;
      }

    for(int i = 2; i*i <= num;i++){
      
      if(num % i == 0){
        return false;
    }
  }

}
int main(){
    int a,b;
    cout <<"Enter 'a': ";
    cin >> a;
    cout << "Enter 'b': ";
    cin >> b;
    
    for(int i = a; i <= b;i++){
       if(isPrime(i)){
           cout << "\nThe numbers between a and b are: " << i ;
       }

    }
    return 0;
}