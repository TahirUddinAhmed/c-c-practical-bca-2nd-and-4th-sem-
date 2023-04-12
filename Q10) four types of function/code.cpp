#include <iostream>
using namespace std;

void sub(); // no return type with no args
void sum(int a, int b); // no return type with args
int  mul(); // with return no args
int division(int p, int q); // with return type with args

int main() {
    int choice;

    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. exit program"<<endl;

    cout<<"Enter your choice(1-5) : ";
    cin>>choice;

    switch (choice){
    case 1:
        int a, b;
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        sum(a, b);
        break;
    case 2:
        sub(); 
        break;
    case 3:
        cout<<"result= "<<mul()<<endl;
        break;
    case 4:
        int p, q;
        cout<<"Enter first number: ";
        cin>>p;
        cout<<"Enter second number: ";
        cin>>q;
        cout<<"Result= "<<division(p, q)<<endl;
        break;
    case 5:
        return false;
        break;
    default:
        cout<<"Please choose a valid option"<<endl;
        break;
    }
    return 0;

}

void sub() {
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"result= "<<a-b<<endl;
}

void sum(int a, int b) {
    cout<<"result= "<<a+b<<endl;
}

int mul() {
    int a, b, mul;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
     
    mul = a * b;
    return mul;
}

int division(int a, int b) {
    return a/b;
}