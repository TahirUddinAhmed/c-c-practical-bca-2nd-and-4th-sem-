#include <iostream>
using namespace std;

int main() {
    int num, res;
    cout<<"Enter a number\n: ";
    cin>>num;

    cout<<"Reverse number is ";
    while(num > 0) {
        res = num % 10;
        cout<<res;
        num = num / 10;
    }
    cout<<endl;
    return 0;
}