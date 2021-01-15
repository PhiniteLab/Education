//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
// CPP variable types - scope - definition

/*

Variable -> providing storage in memory 
            its memory depends on what is the type of variables
            char (1 byte), integer (4 byte) 


*/

/* ex1

#include <iostream>

using namespace std;

int main()
{
    int a;
    double b;

    a = 5;
    b = 6.2;

    cout << "A and B " << a << " " << b << endl;

    int c = 5;

    // type special_name; -> line end

    return 0;
}

 ex1 */

///////////////////////////////
// scope
/* ex2
#include <iostream>

using namespace std;

int a = 7; // global variable

int main()
{ // function scope
    int a = 12;
    {              // local scope
        int a = 8; // local variable
        cout << "Internal scope " << a << endl;
    }

    cout << "Function scope " << a << endl;

    return 0;
}
ex2 */
// scope
///////////////////////////////

///////////////////////////////
// CONSTANTS DEFINITION

/*

(1) Literal -> number and symbol

85 //int
5
86.2 // double
30u   //unsigned int
30l   //long

(2) In C++, there are two ways to define constants

using #define preprocessor
using "const" keyword

*/

///////////////////////////////////////
// #define

/* ex3
#include <iostream>

using namespace std;

#define LENGTH 30
#define WIDTH 5

int main()
{
    int area;

    area = LENGTH * WIDTH;

    cout << "Area of defined keywords " << area << endl;

    return 0;
}
ex3 */
// #define
///////////////////////////////////////

///////////////////////////////////////
// "const" keyword
/*ex4

#include <iostream>

using namespace std;

const int LENGTH = 10;
const int WIDTH = 5;
int area = 0;

int main()
{
    {
        int area;
        int LENGTH;
        int WIDTH;

        LENGTH = 5;
        WIDTH = 5;
        area = LENGTH * WIDTH;
    }

    cout << "Area of const keyword : " << area << endl;

    return 0;
}
ex4*/
//////////////////////////////////////////////////////
// C++ Modifier

/*

signed
unsigned
long
short


unsigned int -> how many byte can be used
(1) memory usage restriction 

int a = 5566555665

unsigned int measurement = 256

signed a = 5        // integer

(2) number limit


*/

#include <iostream>

using namespace std;

int main()
{
    short int i;
    short unsigned int j; // bit organization

    volatile int a = 5;

    j = 50000;

    i = j;

    // 0000 1111    short int
    // 1111 0000    short unsigned int
    cout << sizeof(short int) << endl;
    cout << sizeof(short unsigned int) << endl;

    cout << "I value " << i << " J value " << j << endl;

    return 0;
}

/*
const -> cannot change variable

volatile -> a variable may be changed

restrict -> initially the only means which the object it points to can be accessed


*/

// CPP variable types - scope - definition
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
