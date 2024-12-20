#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 10) {
        if (number < 20) {
            cout << "The number is greater than 10 but less than 20." << endl;
        }
    }

    return 0;
}