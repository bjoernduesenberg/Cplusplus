// Functions_3.cpp 


#include <iostream>
using namespace std;

// Declare a boolean function with the argument int number
bool isPrimeNumber(int number);


int main()
{
    // Create the variable number
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    // Create the boolen isPrimeFlag, which has the value from our function with number as input
    // IsPrimeNumber(number) calls the function and checks if the number is a prime number or not
    bool isPrimeFlag = isPrimeNumber(number);

    // Result of the function is given to this if-Statement 
    if (isPrimeFlag) {
        cout << "This is a prime number";
    }
    else {
        cout << "This is not a prime number";
    }

    system("pause > 0");
}

/* bool isPrimeFlag is true from the beginning, we want to check if its not
   Create a for-loop from 2 to my number -1 (prime numbers are always devidable by 1 and by itself)
   If the modulo is 0 - it means that the number is devidable by another number
   So it is not a prime number, isPrimeFlag = false and the loop can be aborted.
   Return the boolen
*/


bool isPrimeNumber(int number)
{
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) 
            return false; // return breaks the for loop and returns the value
    }
    return true;
}
