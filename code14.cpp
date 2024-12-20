#include <iostream>
using namespace std;

int main() {
	
    int num1,num2;
    cout<<"enter first number ";
       cin>>num1;
    cout<<"enter second number ";
       cin>>num2;
    
 
    
    
    if (num1 < num2) {
        cout << "The smaller number is " << num1 << endl;
    } else {
        cout << "The smaller number is " << num2 << endl;
    }
    return 0;
}