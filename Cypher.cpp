// Cypher.cpp 

#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5; // Creating several character variables - they have to be the same type
    cout << "Enter 5 letter" << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " "
        << int(c4) << " " << int(c5);

    // int(c1) is called a casting operator - we ask the computer to translate the variable c1 into ASCII code

    system("pause>0");
}

