// For-Loop.cpp

#include <iostream>
using namespace std;

int main()
{
    // Find the factorial of a number
    int number, factorial = 1;
    cout << "Please enter a number: " << endl;
    cin >> number;

    if (number == 0 || number < 0) { // You can't calculate the factorial of zero or a negative number
        cout << "This is not a valid number";
    }
    else {
        // 6! = 1 *2 * 3 * 4 * 5 * 6 = 720
        //for (int i = 1; i <= number; i++) { // for(create variable and set initial state; set end state; increase variable)
             //factorial = factorial * i;
        //}

        // 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
        for (int i = number; i >= 1; i--) { // Reverse way to write the algorithm
            factorial = factorial * i;
        }

        cout << "The factorial of " << number << " is: " << factorial << endl;
    }




    system("pause>0");
}
