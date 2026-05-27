#include <iostream>
using namespace std;
int main() {
    int N,z,p=0;
    cout<<"enter the number = ";
    cin>>N;
    while(0<N) {
        z=N%10;
        N/=10;
        p=p*10+z;
      }
    cout<<p;
 return 0;
}