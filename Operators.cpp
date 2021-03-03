// Operators.cpp 

#include <iostream>
using namespace std;

int main()
{
    // Operators are special types of functions
    // Binary arithmetic operators: +, -, *, /, %
    cout << 5 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 2 << endl;
    cout << 5 / 2 << endl; // result is 2 --> dividing 2 whole numbers results in a new whole number, so 2 instead of 2.5
    cout << 5.0 + 2.0 << endl; // result is 2.5 as expected
    cout << 5 % 2 << endl; // Modulo is the remaining value after dividing two numbers

    // Unary arithmetic operators: ++, --
    int counter = 7;

    counter++; // Adds +1 to my variable
    cout << counter << endl;

    counter--; // Subtracts -1 of from my variable
    cout << counter << endl;

    int counter2 = 2;
    cout << counter2++ << endl; // Postincrement - Variable is printed, than plus 1
    cout << ++counter2 << endl; // Preincrement - Variable plus 1, than print

    // Clean console
    system("cls");

    // Relational operators <, >, <=, >=, ==, !=
    // Results are booleans 0 and 1
    int a = 10, b = 10; // , is an operator
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    // Logical operators &&, ||, !
    cout << (a == 10 && b == 10) << endl; // && and
    cout << (a == 10 || b == 5) << endl; // || or
    cout << !(a == 10 || b == 10) << endl; // ! not - negates what is after it

    // Priorities: Arithmetic, relational, logical
    cout << (a == 10 && b == 7 + 3) << endl; // It is true because of the priorities of the operators

    system("cls");

    // Operators of assignment =, +=, -=, *=, /=, %=
    int x = 3;

    // The following lines of command are the same
    x += 7;
    x = x + 7;

    x -= 7;
    x = x - 7;

    x *= 7;
    x = x * 7;

    x /= 7;
    x = x / 7;

    x %= 7;
    x = x % 7;

    system("pause>0");
}
