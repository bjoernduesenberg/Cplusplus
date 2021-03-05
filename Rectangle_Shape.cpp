// Rectangle_Shape

#include <iostream>
#include <iomanip> // input output manipulation
using namespace std;

int main()
{
    int height, width;
    char symbol;
    cout << "Please enter the hight: ";
    cin >> height;
    cout << "Please enter the width: ";
    cin >> width;
    cout << "Please enter your Symbol: ";
    cin >> symbol;


    for (int h = 0; h < height; h++) {

        for (int w = 0; w < width; w++) {
            cout << setw(3) <<symbol;
        }
        cout << endl;
    }


    system("pause>0");
}
