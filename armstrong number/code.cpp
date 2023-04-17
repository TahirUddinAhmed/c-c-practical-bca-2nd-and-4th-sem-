#include <iostream>
#include <cmath>
using namespace std;

int no_of_digits(int num) {
    int rem, no_of_digit = 0;
    while(num>0) {
        rem = num % 10;
        no_of_digit++;
        num = num / 10;
    }

    return no_of_digit;
}

int main() {
    int num, rem, result = 0, count_digits, temp;
    cout<<"Enter a positive number\n: ";
    cin>>num;
    temp = num;
    // store the no_of_digits
    count_digits = no_of_digits(num);

   
    while(num>0) {
        rem = num % 10;  //3

        result = result + pow(rem, count_digits); //= 0 + 27
        num = num / 10; //153 / 10 = 15
    }

    if(result == temp) {
        cout<<temp<<" is a armstrong number"<<endl;
    } else {
        cout<<temp<<"Not armstrong"<<endl;
    }

    return 0;
}


/// 

// 123

// loop : 

//    123 % 10  = 3
//    result = result (3 * 3 * 3)
//    num = 123 / 10



// 1 * 1 * 1 = 1
// 2 * 2 * 2 = 8
// 3 * 3 * 3 = 27

// 1 + 8 + 27 = 

