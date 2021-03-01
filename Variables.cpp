/* Variables
It is not possible to mix datatypes in a variable
Datatypes have a maximum per variable
give meaningful names to variables - otherwise you get confused
No special characters except the underscore _
Variables can not begin with numbers, but end
Spaces are not allowed to use in variables
Use camelCasing - firstSecondThird - start the variable with a lower case letter and every other word in the variable with a capital letter
*/ 

#include <iostream>

int main()
{
    float annualSalary; // A float "annualSalary" 
    std::cout << "What is your annual salary?\n";
    std::cin >> annualSalary;
    float monthlySalary = annualSalary / 12;

    std::cout << "Your monthly salary is: " << monthlySalary;
    std::cout << "\nIn 10 years you will earn: " << annualSalary * 10;

    char character = 'a'; 

    system("pause>0");
}
