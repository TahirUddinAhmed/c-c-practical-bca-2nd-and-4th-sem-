#include <iostream>
using namespace std;

int main() {
    int num, odd[100], even[100];
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1; i <= num; i++) {
        if(i % 2 != 0) {
            cout<<"Odd: "<<i<<endl;
        } else if(i % 2 == 0) {
            cout<<"even: "<<i<<endl;
        }
    }
    return 0;
}