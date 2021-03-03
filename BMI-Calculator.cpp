// BMI-Calculator.cpp 

#include <iostream>
using namespace std;

void main()
{
    // Weight; Height
    float weight, height, bmi;
    cout << "Please put in your weight (kg) and height (m)" << endl;
    cin >> weight >> height;

    bmi = weight / (height * height);

    if (bmi >= 25)
        cout << "You are overweight Your BMI is : "<< bmi << endl;
    else if (bmi <= 18.5)
        cout << "You are underweight! Your BMI is: " << bmi << endl;
    else
        cout << "You have normal weight and a BMI of: " << bmi << endl;

    
    system("pause>0");

}
