// Nested-If-Else-Statement - Enter the side length of a triangle (a, b, c) - print equilateral, isosceles, scalene

#include <iostream>
using namespace std;

int main()
{
    float a, b, c; // Create 3 variables a,b,c type float
    cout << "Type in the length of the sides of your triangle (a, b, c): "<< endl;
    cin >> a >> b >> c; // Demand input of the variables

    if (a == b && b == c) { // First If-Statement
        cout << "Equilateral triangle";
    }
    else {
        if (a != b && a!=c && b != c) { // Second If-Statement as result of the else from the first if-statement
            cout << "Scalene triangle";
        }
        else {
            cout << "Isosceles triangle";
        }
    }


    system("pause>0");
}
