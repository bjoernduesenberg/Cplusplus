#include <iostream>
using namespace std;

void printNumber(int* numberPtr){ // creating a void function which needs a pointer parameter of type int
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr){ // creating a void function which needs a pointer parameter of type char
    cout << *charPtr << endl;
}

// create a function, which can return any data type
void print(void* ptr, char type){ // parameters are a void pointer and a second char variable, which indicated the type of the pointer
    // Using switch/case to determine the type
    switch (type)
    {
    case 'i': cout << *((int*)ptr) << endl; break;// handle int*
    case 'c': cout << *((char*)ptr) << endl; break; // handle char*
    }
}




int main() 
{
    int number = 5;
    // printNumber(&number);


    char letter = 'a';
    // printLetter(&letter);
    
    print(&number, 'i');
    print(&letter, 'c');

}