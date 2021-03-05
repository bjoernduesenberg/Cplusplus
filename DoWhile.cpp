// DoWhile

#include <iostream>
using namespace std;

int main()
{
    // Program simulates a PIN counter, like at an ATM or a mobile phone screen

    int usersPin = 1234, pin, errorCounter = 0;

    do {

        cout << "Please enter your PIN" << endl;
        cin >> pin;

        if (pin != usersPin) { // If the PIN is incorrect, increase errorCounter by 1
            errorCounter++;
        }
            
            } while (errorCounter < 3 && pin != usersPin); // Repeat "do" while the errorCounter is smaller than 3 and the PIN is incorrect
            
    if (errorCounter < 3) { // if PIN is correct, "Loading..." as simulation of a loading screen
        cout << "Loading...";
        errorCounter = 0; // set errorCounter back to 0
    }
    else {
        cout << "Blocked...";
    }

    system("pause>0");
}

