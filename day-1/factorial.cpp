#include <iostream>
using namespace std;
int main() {
    int f,factorial=1;
    cout<<"enter the number = ";
    cin>>f;
    for(int i=1;i<=f;i++) {
        factorial*=i;
    }
    cout<<factorial;
    return 0;
}