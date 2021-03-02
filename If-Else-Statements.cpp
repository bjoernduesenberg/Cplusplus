// If-Else-Statements - Example: If a number is devidable by 2, print x, else print y

#include <iostream>
using namespace std;

int main()
{
    int number; // Create the integer variable number
    cout << "Enter a number: " << endl; // Print out a text
    cin >> number; // Type in a number (integer)

    // If-Else-Statement
    if (number % 2 == 0) {
        cout << "You have entered an even number" << endl;
    }
    else {
        cout << "You have entered an odd number" << endl;
    }

    cout << "Thank you, good bye";

    system("pause>0");
}
