// While-Loop_2.cpp 

#include <iostream>
using namespace std;

int main()
{
    // Count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "You have entered 0.\n";
    }
    else {
        int counter = 0;
        while (number > 0) {
            number = number / 10; // Divides the number by 10; Every number past the komma is deleted because it is an integer
            counter++;           
        }
        cout << "Number contains: " << counter << " digits" << endl;
    }

        system("pause>0");
}
