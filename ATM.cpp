#include <iostream>
using namespace std;

void showMenu(){
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawl" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    /* Tasks of an ATM:
        1. Check the balande
        2. Deposit
        3. Withdrawl
        4. Show menu
    */
int option; // Choosing from the tasks
double balance = 500; // Initial balance
double cashIn=0, cashOut=0;

// do - while loop around the menu and cases
do {
showMenu(); // Show the menu in the console

// Ask what the customer wants to do
cout << "Option: "; 
cin >> option;

// There are 4 things the customer can do
switch (option)
{
case 1: cout << "Your balance is:" << balance << " €" << endl; break; // How much money do I have
case 2: cout << "Depotit amount: "; // Deposit money into my bank account
    double depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
    break;
case 3: cout << "Withdrawl amount: "; // Withdrawl money from my bank account
    double wdAmount;
    cin >> wdAmount;
    if(wdAmount <= balance){
        balance -= wdAmount;
    }
    else {
        cout << "You have not enough money on your bank account" << endl;
    break;
    }
}    
} while(option!=4); // Exit the loop

}
