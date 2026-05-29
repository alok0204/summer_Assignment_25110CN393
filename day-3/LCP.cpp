#include <iostream>
using namespace std;

int main() {
    int a, b, num1, num2;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    num1 = a;
    num2 = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (num1 * num2) / gcd;

    cout << "The LCM is: " << lcm << endl;

    return 0;
}