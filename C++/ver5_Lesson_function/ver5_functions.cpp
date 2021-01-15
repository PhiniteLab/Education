/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
// functions

/*

function -> performing task scope
(1) scope {codes}
(2) return type
(3) name
(4) parameter list

- reading flexibility
- specific process

num1 + num2,   sum()


its structure is given by

return_type function_name(parameter list){
    body of the function

    return value;
}

*/

//////////////////////////////////////
// ex1
/*
#include <iostream>

using namespace std;

int sum(int, int); // function declaration
double sum(double, double);
double sum(double, int);

int main() // address
{
    int num1, num2, result;
    double numd1, numd2, result2;

    num1 = 1;
    num2 = 5;

    numd1 = 5.1;
    numd2 = 4.2;

    //result = sum(num1, num2);
    //result2 = sum(numd1, numd2);

    result = sum(numd1, num2);

    //cout << "Result int is : " << result << endl;
    cout << "Result is : " << result << endl;

    return 0;
}

// calling operator -> ()

int sum(int a, int b) // function definition, address 0xF681525
{
    int result;

    result = a + b;

    cout << "sum int func " << endl;

    return result;
}

double sum(double a, double b)
{
    double result;

    result = a + b;

    cout << "sum double func " << endl;

    return result;
}
*/

#include <iostream>

using namespace std;

int sum(int a = 100, int b = 100)
{
    int result;

    result = a + b;

    return result;
}

int main()
{
    int a = 5;
    int b = 10;
    int result;

    result = sum(a, b);
    int c = 5;

    cout << "Result is : " << result << endl;

    return 0;
}

// functions
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
