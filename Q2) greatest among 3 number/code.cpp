#include <iostream>
using namespace std;

int main() {
    int a, b, c, big;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;

    if(a > b && a > c) {
        big = a;
    } else if(b > c){
        big = b;
    } else {
        big = c;
    }

    cout<<"Greatest number is: "<<big<<endl;
    return 0;
}