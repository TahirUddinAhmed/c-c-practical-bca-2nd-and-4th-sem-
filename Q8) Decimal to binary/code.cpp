#include <iostream>
using namespace std;

int main() {
    int n, arr[12], i, rem;
    
    cout<<"Decimal to binary:- "<<endl;
    cout<<"Enter a deciaml number\n: ";
    cin>>n;

    i = 0;
    while(n > 0) {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    } 

    cout<<"Binary number: ";
    for(int j = i-1; j >=0; j--) {
        cout<<arr[j];
    } 

    return 0;
}