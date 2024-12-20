#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        if (number % 4 == 0) {
            cout << "The number is positive and divisible by 4." << endl;
        }
    }

    return 0;
}