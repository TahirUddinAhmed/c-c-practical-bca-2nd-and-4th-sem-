#include <iostream>
using namespace std;

int main() {
    int val;
    cout<<"Enter a number(1-7): ";
    cin>>val;

    switch(val) {
        case 1:
            cout <<"Sunday"<<endl;
            break;
        case 2:
            cout <<"Monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednessday"<<endl;
            break;
        case 5: 
            cout<<"Thrusday"<<endl;
            break;
        case 6:
            cout<<"Friday"<<endl;
            break;
        case 7:
            cout<<"Saturday"<<endl;
            break;
        default:
           cout<<"Please enter between 1 to 7"<<endl;
           break;
    }
    return 0;
}