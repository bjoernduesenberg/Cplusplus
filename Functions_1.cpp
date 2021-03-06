// Functions_1.cpp 

#include <iostream>
using namespace std;

/* Functions need to be declared obove the main() function - C++ is executed from the top to bottom
   Declaration of the function
   This tells the compiler the type, the name and the parameters of the function 
   Funcitons make the code reusable! */

void function();



int main() // This is the main function
{
    cout << "Hello from main()\n"; // Part of the main function - always executed

    // Call the function
    function();


    system("pause>0");
}

// The definition of the function can be after the main() function - readability
void function() { // type of the function - function name (parameters) {body of the function}
    cout << "Hello from function!" << endl;
}
