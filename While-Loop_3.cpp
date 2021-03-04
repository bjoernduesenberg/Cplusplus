// While-Loop_3

#include <iostream>
using namespace std;

int main()
{
    // Reversing number
    int number, reversedNumber = 0 ;
    cout << "Please enter your number:" << endl;
    cin >> number;

    while (number != 0) {

        reversedNumber *= 10; // Reversed number times 10
        int lastDigit = number % 10;
        reversedNumber += lastDigit; // Adding the last digit to the reversed number
        number /= 10; // Divide number with 10

    }
    cout << "Reversed: " << reversedNumber;

    system("pause>0");
}

