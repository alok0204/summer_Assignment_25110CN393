#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the start: ";
    cin >> start;
    cout << "Enter the end: ";
    cin >> end;

    cout << "Prime numbers: ";

    for (int num = start; num <= end; num++) {
        if (num < 2) continue;

        int i;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                break;
            }
        }

        if (i == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}