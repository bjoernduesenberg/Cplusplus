// Conditional Operator

#include <iostream>
using namespace std;


int main()
{
    // Learning with a guessing game
    int hostUserNum, guestUserNum;

    cout << "Host, please enter your number: " << endl;
    cin >> hostUserNum;
    system("cls");

    cout << "Guest, please enter your number: " << endl;
    cin >> guestUserNum;

    /* 
    Classical If-Else Statement
    if (hostUserNum == guestUserNum) {
        cout << "Correct";
    }
    else {
        cout << "Wrong";
    }
    */

    // Is the hostnumber == guestnumber, than cout Correct otherwise cout Wrong
    (hostUserNum==guestUserNum)? cout << "Correct": cout << "Wrong";


    system("pause>0");
}
