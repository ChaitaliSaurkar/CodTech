/*Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, 
multiplication, and division. Allow the user to input two numbers and choose an operation to perform.*/

#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    // define variables
    string operation;
    double number1, number2;

    // get user input
    cout << "Enter First Number: ";
    cin  >> number1;
    cout << "Enter operation ( +, -, *, /):";
    cin  >> operation;
    cout << "Enter second Number: ";
    cin  >> number2;

    // if else statement checking entered operation
    if (operation == "+")
    {
        cout << number1 + number2;
    }
    else if (operation == "-")
    {
        cout << number1 - number2;
    } 
    else if (operation == "*") 
    {
        cout << number1 * number2;
    } 
    else if (operation == "/") 
    {
        cout << number1 / number2;
    }
     else 
    {
        cout << " Not a recognize operation!";
    }


    return 0;

}

