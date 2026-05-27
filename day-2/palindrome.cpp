#include <iostream>
using namespace std;
int main() {
    int N,z,p=0;
    cout<<"enter the number = ";
    cin>>N;
    int OgNum=N;
    while(0<N) {
        z=N%10;
        N/=10;
        p=p*10+z;
      }
    if(p==OgNum)
    {cout<<"Number is a palindrome.";}
    else
    {cout<<"Number is not a palindrome";}
 return 0;
}