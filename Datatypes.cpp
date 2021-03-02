// Basic datatypes

#include <iostream>
using namespace std;

int main()
{

    // Remainder - 1 byte = 8 bit

    int yearOfBirth = 1991; // Integer - whole numner (4bytes)
    float averageGrade = 1.9; // Float - could be an integer or a decimal number (4bytes)
    double balance = 15646844546465; // Double - same as float, except it can store the double amount of data (8bytes)
    char gender = 'm'; // Character - one character (1byte)
    bool isOlderThan18 = true; // Boolean - T/F values (1byte)
    unsigned onlyPositive = 123; // Unsigned - Integer which can hold only positive numbers (4bytes)

    // How to show the size of a variable
    cout << "Size of Int is " << sizeof(int) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of boolean is " << sizeof(bool) << " bytes\n";
    
    // How to show the minimal value, which can be stored in an Integer
    cout << "The minimal value of int is " << INT_MIN << endl; 

    // How to show the maximal value, which can be stored in an Integer
    cout << "The maximal value of int is " << INT_MAX << endl;

    // How to show the maximal value, which can be stored in an unsigned Integer
    cout << "The maximal value of unsigned int is " << UINT_MAX << endl;

    system("pause>0");
}

