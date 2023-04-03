#include <iostream>
using namespace std;

int main() {
    int n, arr[12], i;
    
    cout<<"Decimal to binary:- "<<endl;
    cout<<"Enter a deciaml number\n: ";
    cin>>n;

    for(i = 0; n > 0; i++) {
        arr[i] = n % 2;
        n = n / 2;
    }   
    for(i=i-1; i>=0; i--) {
        cout<<arr[i];
    }  

    return 0;
}