#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        if (number > 10) {
            cout << "The number is positive and greater than 10." << endl;
        }
    }

    return 0;
}