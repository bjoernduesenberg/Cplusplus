#include <iostream>
using namespace std;

// Swapping function --> Problem function overloading --> For each type a new function with the same name
// void Swap(char& c, char& c) { // getting a and b from the main function
//    char temp = c;
//    c = d;
//    d = temp;
// }



// Template creation
template<typename T>

// With the T from template, the function can swap every type!
void Swap(T& a, T& b) { 
    T temp = a;
    a = b;
    b = temp;
}

// Example within the main()
int main() 
{
    int a = 5, b = 7; // Create two int variables
    char c = 'c', d = 'd'; // Create two char variables
    
    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;

    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;

    return 0;
}