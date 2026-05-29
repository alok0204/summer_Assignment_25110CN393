#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "The GCD is: " << a << endl;

    return 0;
}