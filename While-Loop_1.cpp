// While-Loop_1.cpp 

#include <iostream>
using namespace std;

int main()
{
    // While x is true - iterate over a code block
    // write out all numbers between 100-500 which are divisible by 3 and 5

    int counter = 100; // Create counter and set initial value to 100

    while (counter <= 501) 
    { // While Counter is <= 501 iterate over the code block within the loop
        if (counter % 3== 0 && counter % 5 == 0) { // Condition
            cout << counter << " Is divisible\n";
        }
        counter++; // on each iteration we increase the value of the counter
    }


    system("pause>0");
}
