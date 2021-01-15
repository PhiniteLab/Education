////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
// EX1 - CALCULATOR

#include <iostream>

using namespace std;

/* sum, substract, multiply, divide (integer) 
- function definition
- choices
*/

enum OperationCodes
{
    SumOp = 1,
    SubstractOp = 2,
    MultiplyOp = 3,
    DivideOp = 4,
    ExitOp = 5,
};

// declaration
int sum();
int substract();
int multiply();
int divide();
void display_operations();

int main()
{
    int choice = 0;

    while (choice != ExitOp)
    {
        cout << "Please select the desired operation : \n\n";
        display_operations();
        cin >> choice;

        switch (choice)
        {
        case SumOp:
            sum();
            break;
        case SubstractOp:
            substract();
            break;
        case MultiplyOp:
            multiply();
            break;
        case DivideOp:
            divide();
            break;
        case ExitOp:
            break;
        default:
            cout << "Please select appropriate values. Try again!" << endl;
            break;
        }
    }

    return 0;
}

///////////////////////////
// function definition

void display_operations()
{
    cout << "Sum for 1" << endl;
    cout << "Substract for 2" << endl;
    cout << "Multiply for 3" << endl;
    cout << "Divide for 4" << endl;
    cout << "Exit for 5" << endl;
    cout << endl;
}

int sum()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a >> b;

    cout << "The sum of two variables : " << (a + b) << endl;

    return a + b;
}

int substract()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a >> b;

    cout << "The substraction of two variables : " << (a - b) << endl;

    return a - b;
}

int multiply()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a >> b;

    cout << "The multiplication of two variables : " << (a * b) << endl;

    return a * b;
}

int divide()
{
    cout << "Please enter two integer numbers : ";
    int a, b;
    cin >> a >> b;

    cout << "The division of two variables : " << (a / b) << endl;

    return a / b;
}

// EX1 - CALCULATOR
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
