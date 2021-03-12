#include <iostream>
using namespace std;

int main()
{
    /* Example hardcoded
    Creating an array
    int luckyNumbers[5] = { 2, 3, 6, 8, 9};

    // Calling the whole array gives the address of the first element within the array
    cout << luckyNumbers << endl;
    cout << &luckyNumbers[0] << endl; // Proof -> both are the same

    // Calling the first element
    cout << luckyNumbers[0] << endl;

    // Calling the third element
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl; // to invoke the array + 2 gives also the third element */

    int luckyNumbers [5]; // Create array with 5 elements

    for(int i = 0; i <= 4; i++){ // User has to type in the 5 elements with a for-loop
        cout << "Number: " << endl;
        cin >> luckyNumbers[i];
    }

    for(int i = 0; i <= 4; i++){ // Use pointer to print the elements
        cout << *(luckyNumbers + i) << "   ";
    }
}