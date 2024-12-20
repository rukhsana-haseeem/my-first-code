#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (sqrt(number) == int(sqrt(number))) {
        if (number >= 0) {
            cout << "The number is a perfect square." << endl;
        }
    }

    return 0;
}