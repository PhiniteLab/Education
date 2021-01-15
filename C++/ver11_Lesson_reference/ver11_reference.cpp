///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
/// reference

/*

reference -> another name of variable

int x = 34;
int &r = x;

r -> update aritmetic statement on x

reference -> masking pointer

*/

///////////////////////////////////////////
// ex1

/*
#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << "x = " << x << endl;

    int &r = x;

    r++;

    cout << "x = " << x << endl;

    return 0;
}
*/

/////////////////////////////////////////////////
// ex2
/*
#include <iostream>
using namespace std;

void func(int &a) // call by reference
{
    a = 9999;
}

int main()
{
    int x = 234;

    cout << "x = " << x << endl;

    func(x);

    cout << "x = " << x << endl;

    return 0;
}
*/

//////////////////////////////////////////////
// ex3
/*
#include <iostream>
using namespace std;

void swap(int &x, int &y) // reference
{
    int temp = x;
    x = y;
    y = temp;
}

void swapPtr(int *x, int *y) // pointer
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 10;
    int y = 100;

    swapPtr(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
*/

/////////////////////////////////////////////////
// ex4
/*
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int &r1 = x;
    int &r2 = x;
    int &r3 = x;

    int *p1 = &x;
    int *p2 = &x;
    int *p3 = &x;

    r1++;
    r2++;
    r3++;
    x++;

    (*p1)--;
    (*p2)--;
    (*p3)--;

    cout << "x = " << x << endl;

    return 0;
}
*/
////////////////////////////////////////
// ex5
/*
#include <iostream>
using namespace std;

int main()
{
    int x = 50;
    int &r1 = x;
    int &r2 = r1; // r2 -> x

    r1++;

    cout << "r2 = " << r2 << endl;
    cout << "x = " << x << endl;

    return 0;
}
*/

///////////////////////////////////////////
// ex6
/*
#include <iostream>
using namespace std;

int main()
{
    int x = 50;
    int *ptr = &x;
    int *&r = ptr;

    *r = 999;
    ptr++;
    r++;

    cout << "x = " << x << endl;
    cout << "r = " << r << endl;
    cout << "ptr = " << ptr << endl;

    return 0;
}
*/

///////////////////////////////////////////////
// ex7

/*
#include <iostream>
using namespace std;

int main()
{
    const int x = 50;

    const int *ptr = &x;

    cout << "ptr = " << ptr << endl;

    ptr++;

    cout << "ptr = " << ptr << endl;

    const int x = 10;
    const int &r = x;

    return 0;
}
*/

//////////////////////////////////////////////////////////
// ex7

/*
#include <iostream>

using namespace std;

struct Data
{
    int a, b, c;
};

int *func()
{
    static int x = 56;

    return &x;
}

int main()
{
    Data mydata;

    Data &r = mydata;

    r.b = 3;

    int *ptr = func();

    cout << "r.b = " << r.b << endl;
    cout << "ptr = " << *ptr << endl;

    return 0;
}
*/

///////////////////////////////////////////////////
// ex8

/*
#include <iostream>

using namespace std;

int g = 90; // global variable

int &func()
{
    return g;
}

int *foo()
{
    return &g;
}

int main()
{
    cout << "func() = " << func() << endl;

    func() = -1; // g

    cout << "func() = " << func() << endl;

    *foo() = 56;

    cout << "func() = " << func() << endl;

    return 0;
}
*/

//////////////////////////////////////////////////////////
// ex9

/*

the difference between reference and pointers

- reference only shows pointers, pointers points whatever

int *&r = ptr;
int *&r = ptr2;

int *ptr = &a;
ptr = &b;

- reference cannot hold reference

int &r = a;
int &r2 = r;
int &r3 = r2;

- void pointer can be used, void reference cannot be used

void *
void & -> syntax error

- pointer array, 

int **a = {&b, &c, &d, ..}

- reference array does not exist

int &r = {r1, r2, r3}

- NULL reference does not exit, pointer has!

*/

/*
#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0};

    int(&r)[10] = a;

    for (int k = 0; k < 10; k++)
    {
        cout << r[k] << " ";
    }
    cout << endl;

    int *ptr = r;
    *r = 99;
    *(a + 1) = 10;
    *(r + 2) = 20;

    int b = 10;
    int &r2 = b;

    for (int k = 0; k < 10; k++)
    {
        cout << r[k] << " ";
    }

    cout << endl;

    return 0;
}
*/

//////////////////////////////////////////////////////////
// ex10
/*
#include <iostream>

using namespace std;

int main()
{
    //int b = 5;
    //int &r1 = 10;

    //int *ptr = 10; // C no-error, C++ syntax error

    //int x = 10;
    //double *ptr = &x; // C no-error, C++ syntax error

    const int &r = 10; // temporary object

    int x = 20;

    const double &dr = x;

    cout << dr << endl;

    return 0;
}
*/
/// reference
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
