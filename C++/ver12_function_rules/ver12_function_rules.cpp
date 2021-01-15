///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
// function rules

/*

function default argument
function overloading

FUNCTION DEFAULT ARGUMENT

- not standard in C

func(int a, int b, int c)

func(5,6)

syntax 

func(int a, int b, int c = 50)      // decleration, 

                                // not in definition

*/

//////////////////////////////////////////
// ex1
/*
#include <iostream>

using namespace std;

void display(int, int, int = 30);

int main()
{
    //display(5, 4, 3);
    //display(5, 4);
    //display(5);
    //display();

    //display(1, ,4);    // syntax error

    display(5, 10);

    return 0;
}

// function definition
void display(int x, int y, int z)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << endl;
}
*/

/////////////////////////////////////
// ex2
/*
#include <iostream>

using namespace std;


void f1(int a = 10)
void f2(int x = f1())

int x;
void f1(int &r = x)



int func()
{
    cout << "calling func" << endl;
    return 1;
}

int x = func();

void func(int a, int b, int c);
void func(int a, int b = 50, int c);

int main()
{

    int x = 1;
    int y = 1;
    int z = 1;

    // split into specific atom/code alphabet
    // syntax rule

    x = y++ + z;

    cout << "main" << endl;

    return 0;
}
*/

/////////////////////////////////////////////
// ex3

#include <iostream>
#include <ctime>

using namespace std;

void processDate(int day, int mon, int year = -1);

int main()
{
    processDate(1, 4, 1987);
    processDate(5, 10);

    return 0;
}

void processDate(int day, int mon, int year)
{
    if (year == -1)
    {
        time_t timer = time(0);
        tm *tptr = localtime(&timer);
        year = tptr->tm_year + 1900;
    }
    cout << day << "/" << mon << "/" << year << endl;
}

// function rules
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
