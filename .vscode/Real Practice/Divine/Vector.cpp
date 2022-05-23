#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
        for(int i = 0; i < v.size(); i++)
            cout << v[i] <<" ";
        
  }
    int main(){
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of a vector: ";
    cin >> size;
    for(int i = 0; i < size; i ++){
        cout << "Enter elements to add to the vector: " << i + 1<< ": ";
        cin >> element;
        vec1.push_back(element);
    }
    //Removes lat element of the vector - popback().
    vec1.pop_back();
    display(vec1);
        return 0;
}