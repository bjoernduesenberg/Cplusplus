// Swich_Case_Examples

#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Please enter a year and a month" << endl;
    cin >> year >> month;

    // Leap year or not?
    // (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

    switch (month)
    {
    case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? // case 2 (Feb.) - Check if leap year
        cout << "29 days month." : cout << "28 days month."; break; // True = ...: False = ...
    case 4:
    case 6:
    case 9:
    case 11: cout << "30 days month."; break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "31 days month."; break;
    default: cout << "Not valid" << endl;

    }

    system("pause>0");

}
