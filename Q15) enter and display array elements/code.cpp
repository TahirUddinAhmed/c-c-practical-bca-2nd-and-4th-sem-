// enter and display array elements
#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the array size\n: ";
    cin>>size;
    int arr[size]; // array declaration

    cout<<"Enter the array elements: "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<"Enter arr["<<i<<"] Element: ";
        cin>>arr[i];
    }

    cout<<"Array Elements array: "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl; // new line


    return 0;
}