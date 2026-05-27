#include <iostream>
using namespace std;
int main() {
    int n,z,p=0;
    cout<<"enter the number = ";
    cin>>n;
    while (n>0)
    {
     z=n%10;
     n/=10;
     p+=z; 
    }
    cout<<p;
    return 0;
}