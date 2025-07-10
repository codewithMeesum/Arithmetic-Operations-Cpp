#include <iostream>
using namespace std;

int main() {
    float a, b;         
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nAddition: " << a + b;
    cout << "\nSubtraction: " << a - b;
    cout << "\nMultiplication: " << a * b;

    if (b != 0)
        cout << "\nDivision: " << a / b;
    else
        cout << "\nDivision not possible (denominator is 0)";

    return 0;
}

