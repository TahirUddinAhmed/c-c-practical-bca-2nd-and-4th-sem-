//Enter and Display name
#include <iostream>
using namespace std;

int main() {
    char name[30];
    string bio;

    cout<<"Enter your name: ";
    cin.getline(name, 30);

    cout<<"Enter your bio: ";
    getline(cin, bio);

    cout<<"\nName: "<<name<<endl;
    cout<<"Your bio - \n "<<bio<<endl;
    return 0;
}