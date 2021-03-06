// Functions_2.cpp 

#include <iostream>
using namespace std;

/* Declare function
   Define the Argument within the bracets - type of the argument and name of the argument
   A default value can entered directly into the function 
   Default values can only specified at the end of the argument list
   void nameAndAdress(string name, string city, int age = 25); */
void introduceMe(string name); 
void nameAndAdress(string name, string city, int age);


int main()
{
    string name, city;
    int age;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter the city you are living in: ";
    cin >> city;
    cout << "Please enter your age: ";
    cin >> age;

    // Call the function and direct input
    introduceMe("B");
    nameAndAdress("B", "Er", 30);
    
    // Call the function and pass the variable
    introduceMe(name);
    nameAndAdress(name, city, age);

    system("pause > 0");
}


void introduceMe(string name)
{
    cout << "My name is: " << name << endl;
    }

void nameAndAdress(string name, string city, int age)
{
     cout << "Your name is " << name << ". You are living in " << city << ". And you are " << age << " old";
}
