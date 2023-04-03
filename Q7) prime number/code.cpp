#include <iostream>
using namespace std;

int main() {
    int n, prime = 1;
    cout<<"Enter a positive integer\n: ";
    cin>>n;

    for(int i = 2; i < n; i++) {
      if(n % i == 0) {
        prime = 0; // not prime number
        break; 
      }
    }

    if(prime == 1) {
     cout<<n<<" is a prime number"<<endl;
    } else {
        cout<<n<<" is not a prime number"<<endl;
    }

    
    return 0;
}