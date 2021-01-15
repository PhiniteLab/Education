///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
// C++ Operators

/*

operator -> specific mathematical manipulations

2 3 -> variable
sum, substract, multiply -> function, process (operator)

mathematic (+,-,*,/, !, =, &&, &, <,>, >=, <=)


Operator types

Arithmetic -> (+,-,*,/,%, ++, --)
Relational
Logical
Bitwise
Assignment
Misc


*/

/////////////////////////////////////////7
// ex1 - Arithmetic -> (+,-,*,/,%, ++, --)
/*
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;

    num1 = 20; // assignment
    num2 = 2;  // assignment

    result = num1 + num2; // arithmetic
    result = num1 * num2;
    result = num1 / num2;

    cout << "Result is : " << result << endl;

    return 0;
}
*/

//////////////////////////////////////////////////
// ex2 - Relational (==, !=, <, >, >= , <=)
/*
#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    if (a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else
    {
        if (a == b)
        {
            cout << "A is equal to B" << endl;
        }
        else
        {
            cout << "B is greater than A" << endl;
        }
    }

    return 0;
}
*/

//////////////////////////////////////////////////
// ex3 - Bitwise (&, |, ~, ^, <<, >>)

/*
A = 0011
B = 1010

A&B = 0010
A|B = 1011
~A = 1100



*/

#include <iostream>

using namespace std;

int main()
{
    unsigned char a = 5, b = 9;
    // a = 0000 0101 << 1 => 0000 1010 , << 2, 0001 0100
    // b = 0000 1001

    cout << "A&B " << (a & b) << endl;
    cout << "A|B " << (a | b) << endl;
    cout << "A<< " << (a << 2) << endl;

    int c = 5; // assignment

    c += 5;

    cout << "C is : " << c << endl;

    cout << "Sizeof char " << sizeof(char) << endl;

    return 0;
}

// C++ Operators
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
