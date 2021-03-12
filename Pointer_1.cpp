#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl; // Print aut the value of the variable (container) n

    // to get the address of the n variable
    cout << &n << endl;

    // Create pointer
    int* ptr = &n;
    
    // Showing that ptr has safed the address of the variable n
    cout << ptr << endl;

    // Excessing the value
    cout << *ptr << endl;

    // if we change the value of the pointer, the value of the pointed variable will be changed as well!
    // Pointers needs to be from the same type!

    int v; // creating a new variable
    int* ptr2 = &v; // Pointer need an address! --> points to v
    *ptr2 = 7;

    cout << v << endl; // v has the value of ptr2

}