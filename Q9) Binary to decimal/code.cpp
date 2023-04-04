#include <iostream>
using namespace std;

int main() {
    int binary, rem, decimal = 0, weight = 1;

    cout<<"Enter a binary number: ";
    cin>>binary;

    while(binary != 0) {
        rem = binary % 10;  // get the last digit of the binary number
        decimal = decimal + rem*weight; 
        binary = binary / 10;
        weight = weight*2;
    }

    cout<<"Decimal number is : "<<decimal<<endl;
    return 0;
}


// let conside the binary number -

// 1001

// first round: 
//     rem = 1001 % 10 = 1
//     decimal = 0 + 1*1 = 1
//     binary = 1001 / 10 = 100
//     weight = 1 * 2 = 2

// second round: 
//    rem = 100 % 10 = 0
//    decimal = 1 + 0*2 = 1
//    binary = 100 / 10 = 10
//    weight = 2*2 = 4

// third round: 
//    rem = 10 % 10 = 0
//    decimal = 1 + 4*0 = 1
//    binary = 10 / 10 = 1
//    weight = 4*2 = 8

// fouth round: 
//    rem = 1 % 10 = 1
//    decimal = 1 + 8*1 = 9
//    binary = 1 / 10 = 0
//    weight = 8*2 = 16

//    end the loop (binary != 0);

//    so, decimal = 9