// While-Loop_2.cpp 

#include <iostream>
using namespace std;

int main()
{
    // Count digits of a number
    int number; // Maximum 10 digits, because the datatype integer cant hold more
    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "You have entered 0.\n";
    }
    else {
       
        if (number < 0) { // if the number is negative, it is converted into a positive number, so the algorithm works
            number = number * (-1);
        }

        int counter = 0;

        while (number > 0) {
            number = number / 10; // Divides the number by 10; Every number past the komma is deleted because it is an integer
            counter++;           
        }
        cout << "Number contains: " << counter << " digits" << endl;
    }

        system("pause>0");
}
