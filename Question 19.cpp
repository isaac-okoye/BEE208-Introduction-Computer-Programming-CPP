#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter binary number: ";
    cin >> binary;

    decimal = stoi(binary, 0, 2);

    cout << "Decimal = " << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;
    cout << "Hexadecimal = " << hex << uppercase << decimal << endl;

    return 0;
}