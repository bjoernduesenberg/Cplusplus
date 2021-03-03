// SwappingValuesOfTwoVariables.cpp 

#include <iostream>
using namespace std;

int main()
{
    // Program for swapping values

    // For the first swap
    int a = 20;
    int b = 10;
    // For the second swap
    int x = 20;
    int y = 10;

    // Temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << "\nb = " << b << endl;

    // Without temporary variable
    x = x + y; // Assign to variable a the value of a + b (30)
    y = x - y; // Assign to variable b the value of a - b (20)
    x = x - y; // Subtract the value of b from a (10)

    cout << "x = " << x << "\ny = " << y << endl;




    system("pause>0");
}
