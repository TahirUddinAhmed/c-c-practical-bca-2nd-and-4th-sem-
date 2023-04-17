#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}


int main() {
    int num, fact;
    cin>>num;
    
    fact = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<fact;
    return 0;
}

// fact(n) = n * fact(n - 1)