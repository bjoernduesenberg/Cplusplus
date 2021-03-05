// Triangle_Shape.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height, width;
    char symbol;
    cout << "Please enter the heigth: ";
    cin >> height;
    cout << "Please enter the width: ";
    cin >> width;
    cout << "Please enter your symbol: ";
    cin >> symbol;

    for (int h = 0; h <= height; h++) {

        for (int w = 0; w <= h; w++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

    system("pause>0");
}
