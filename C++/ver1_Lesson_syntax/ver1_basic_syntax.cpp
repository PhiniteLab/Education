//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
// basic syntax examples

/* ex1

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 5; // 0000 0101 computer sees this!
    double b = 5.5;

    int c = 5.2;

    printf("Value of C is %d\n", c);
    printf("Value of B is %lf\n", b);

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of float : " << sizeof(float) << endl;

    return 0;
}

ex1 */
/*
Basic Data Types

type -> how many bytes are used

Primitive built-in types

(1) boolean - bool "true-false"
(2) character - char "abc"
(3) integer - int
(4) floating point - float
(5) double floating point - double
(6) valueless - void
(7) wide character - wchar_t

with some speciffic keywords relation to add before and after
to the code

signed          // change required bytes
unsigned
short
long


*/

/*ex2
// pressure measurement     - double

#include <iostream>

using namespace std;

typedef double Pressure_Unit;

int main()
{
    double Pres_measurement;
    Pressure_Unit Pres_measurement2;

    Pres_measurement = 5.2;

    Pres_measurement2 = 4.2;

    cout << "Pressure value : " << Pres_measurement << endl;
    cout << "Pressure value : " << Pres_measurement2 << endl;

    return 0;
}

ex2*/

/* color -> Red, Green, Blue */

#include <iostream>

using namespace std;

enum color
{
    red = 255, // integer
    green = 140,
    blue = 18
} c;

int main()
{

    cout << "Blue type value is " << blue << endl;
    cout << "Red type value is " << red << endl;
    cout << "Green type value is " << green << endl;

    return 0;
}

/*

C - structure

struct Color {      // to cover different variables type 
    int Red;
    int Green;
    int Blue;

    char name;
    char ID;

} colors;

struct Student {
    char name;
    char surname;

    double points;
    char ID;

} student_struct;

student_struct Mehmet;
Mehmet.name = "Mehmet"


////////////////////////////////////

CLASS

Struct -> variable
Class -> variable, function

(1) Object = has states (variable) and behaviour(function)
Mehmet.name
Mehmet.getPoint()
(2) Class -> template describing function and state
(3) Method -> function (behaviour)
(4) Instance variable -> Mehmet

class Car

class Glass
class Motor
class Door



*/

// basic syntax examples
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
