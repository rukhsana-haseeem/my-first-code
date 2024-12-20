#include <iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else {
        cout << "The character is lowercase." << endl;
    }
    return 0;
}