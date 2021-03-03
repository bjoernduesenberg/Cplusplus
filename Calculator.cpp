// Calculator

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Please enter your numbers and the operator" << endl;
    cin >> num1 >> operation >> num2;

    // Switch/Case Statement
    // operation can hold 6 different values

    switch (operation)
    {
    // case 'input': Than print out (cout) ... << calculation; break;
    case '-': cout << num1 << operation << num2 << " = " << num1 - num2; break;
    case '+': cout << num1 << operation << num2 << " = " << num1 + num2; break;
    case '*': cout << num1 << operation << num2 << " = " << num1 * num2; break;
    case '/': cout << num1 << operation << num2 << " = " << num1 / num2; break;
    case '%': 
        bool isNum1Int, isNum2Int; // For the modulus we need two integers
        isNum1Int = ((int)num1 == num1); // is the integer of num1 the same as num1 - T/F?
        isNum2Int = ((int)num2 == num2); // is the integer of num2 the same as num2 - T/F?

        if (isNum1Int && isNum2Int) { // if both are true - calculation can be done
            cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2; break;
        }
        else {
            cout << "Calculation is not possible" << endl; break;
        }
        default: cout << "Not a valid operator" << endl;
    }
    

    system("pause>0");
}

