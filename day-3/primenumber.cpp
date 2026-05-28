#include <iostream>
using namespace std;
int main() {
     int n;
    cout << "enter the number = ";
    cin >> n;
    if(n<=1){
        cout<<"Not a prime";
        return 0;
    }
    if(n==2){
        cout<<"Prime";
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << "Not a prime number";
            return 0;
        }
    }
            cout << "Prime";
            return 0;
        
    }
