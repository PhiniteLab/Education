//////////////////////////////////////////////////
//////////////////////////////////////////////////
// function overloading

/*

function overloading -> shared function name

- not in C programming language

sum(int, int);
sum(double, double);
sum(float, float);

sum(4,4)
sum(5.6,6.7)

linking

static linking -> compiler, function + variable
dynamic linking -> run time, finding function


RULES

(1) 
int func(int, double);

C -> func address
C++ -> func address + parameter

return value ->
parameter -> signature

(2) 
int f1(int, double);
int f1(int, double);

function redecleration

(3)

typedef

typedef int word;

int func(int);      // redecleration
word func(word);

(4)

int func(int);      // redecleration
int func(int = 10);


(5) 

void func(int x);   // redecleration
void func(const int x);

(6)

int foo(int x);     // no decleration, syntax error
double foo(int x);

(7)
scope 1
int foo(int x)

scope 2
int foo(double x)


//////////////////////////////////////////////
// function overloading resolution

(1) compiler checks functions with same name

(2) Candidate function => parameter, parameter types

sum(int, int)

sum(5, 6.7) // syntax error

C++ conversion

(a) exact match
(b) promotion
(c) standart conversion
(d) user defined conversion

*/

//////////////////////////////////////////
// ex1 - exact match
/*
#include <iostream>

using namespace std;

void sum(int, int);
void sum(double, double);

int main()
{

    double a = 5;
    double b = 7;

    sum(a, b);

    return 0;
}

void sum(int a, int b)
{
    cout << "Sum of ints : " << (a + b) << endl;
}
void sum(double a, double b)
{
    cout << "Sum of doubles : " << (a + b) << endl;
}*/

//////////////////////////////////////////
// ex2 - promotion
/*

in C, short or char -> converting to integer
in C++;

- sum(double),   main sum(float) okey!
- short, char, bool,  main sum(integer) promotion



#include <iostream>

using namespace std;

void sum(int, int);
void sum(double, double);

int main()
{

    float a = 5;
    float b = 7;

    sum(a, b);

    return 0;
}

void sum(int a, int b)
{
    cout << "Sum of ints : " << (a + b) << endl;
}
void sum(double a, double b)
{
    cout << "Sum of doubles : " << (a + b) << endl;
}
*/

/////////////////////////////////////////
// ex3 - standard conversion

/*

void func(unsigned int)
void func(double)

func(10)
*/

float func(float);
double func(char);

#include <iostream>

using namespace std;

int main()
{
    func(10.5);

    return 0;
}

float func(float a)
{
    return 1.1;
}
double func(char a)
{
    return a;
}

// function overloading
//////////////////////////////////////////////////
//////////////////////////////////////////////////
