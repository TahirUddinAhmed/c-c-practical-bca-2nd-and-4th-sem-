#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0, product = 1;
    cout<<"Enter two number: ";
    cin>>a>>b;
    
    sum = a + b;
    product = a * b;
    
    cout<<"Sum of a and b is = "<<sum<<endl;
    cout<<"Product of a and b is = "<<product<<endl;

    return 0;
}