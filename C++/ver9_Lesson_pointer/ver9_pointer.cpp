////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
// pointers

/*

- binary bit

---- ----       8 bit - 1 byte
---- ----
---- ----
---- ----


int a = 2;          // variable -> value (mathematic)

0000 0000       32 bit - 4 byte
0000 0000
0000 0000
0000 0010

memory

/// ex1 

int a = 2;  

0x68 byte        0000 0000       32 bit - 4 byte
0x69 byte        0000 0000
0x70 byte        0000 0000
0x71 byte        0000 0010

cout << a << endl;

/// ex1 

char ch = 'e'      1 byte

0x12    0000 0100

cout << ch << endl;

0x68 -> address

pointer -> data type containing the address of specific variables (double, float, int, char)


package {book, pencil}

book, pencil -> variables

package -> pointer

int (value) ->    int * (address)

*/

////////////////////////////////////////////
// ex1
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() // executing point/start
{
    int a = 2; // variable
    double b = 5.2;
    char c = 'e';

    // pointer variable
    int *aptr; // variable
    aptr = &a;

    double *bptr;
    bptr = &b;

    cout << "size of a : " << sizeof(int) << endl;
    cout << "size of b : " << sizeof(double) << endl;
    cout << "size of c : " << sizeof(char) << endl;

    cout << endl;

    cout << "size of address int : " << sizeof(int *) << endl;
    cout << "size of address double : " << sizeof(double *) << endl;

    cout << endl;

    cout << "Address of a : " << &a << endl;
    cout << "Address of a : " << aptr << endl;
    cout << "Address of b : " << &b << endl;
    cout << "Address of b : " << bptr << endl;
    printf("Address of c : %p\n", &c);

    return 0;
}
*/

///////////////////////////////////////////////
// ex2
/*
#include <iostream>

using namespace std;

// address -> 1011 1101   0xF89A3F

int main() // 0xF89ABC8
{
    int a = 2; // 4 byte
    int *aptr; // 4 byte

    double b = 2.2;
    double *bptr;

    aptr = &a;
    bptr = &b;

    cout << "a : " << a << endl; // masking pointers
    cout << "aptr value : " << *aptr << endl;

    cout << "b : " << b << endl; // masking pointers
    cout << "bptr value : " << *bptr << endl;

    return 0;
}
*/

////////////////////////////////////////////////
// ex3

/*

pointer arithmetic : ++,-- (increment, decrement)

int a;     // 4 byte
double b;  // 8 byte
char c;    // 1 byte

int *aptr = &a
int *bptr = &b
char *cptr = &c

&a = 1000
&b = 2000
&c = 3000

aptr++  1004
aptr--  996

bptr++  2008
bptr--  1992

cptr++  3001
cptr--  2999

*/
/*
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *aptr;

    aptr = &a;

    cout << "aptr : " << aptr << endl;

    aptr--;

    cout << "aptr : " << aptr << endl;

    double b = 5;
    double *bptr;

    bptr = &b;

    cout << "bptr : " << bptr << endl;

    bptr--;

    cout << "bptr : " << bptr << endl;

    // loop

    int c = 5;

    int *cptr = &c;

    for (int i = 0; i < 10; i++)
    {
        cptr--;
        cout << "cptr " << i << " " << (*cptr) << endl;
    }

    return 0;
}*/

////////////////////////////////////////////////
// ex4
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main()
{
    int a[SIZE] = {1, 2, 3};
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    cout << "Addresses of a" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "&a[" << i << "] : " << &a[i] << endl;
    }
    

    
    int *aptr;

    aptr = &a[SIZE - 1];

    cout << "aptr = " << aptr << endl;
    cout << "a[0] address : " << &a[0] << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "a[" << i << "] : " << *(aptr - i) << endl;
    }


    int *aptr;
    int *aptr2;
    int *aptr3;

    aptr = &a[0];
    aptr2 = &a[0];
    aptr3 = &a[0];

    for (int i = 0; i < 3; i++)
    {
        cout << "a[" << i << "] : " << *(aptr3 + i) << endl;
        cout << "a[" << i << "] : " << *(aptr++) << endl;
        cout << "a[" << i << "] : " << aptr2[i] << endl;
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    return 0;
}
*/

///////////////////////////////////////////////////
// ex 5
/*
#include <iostream>

using namespace std;

const int SIZE = 3;

int main()
{
    int a[SIZE] = {1000, 100, 10};
    int i = 0;

    
    while (i < SIZE)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
        i++;
    }
    
    
    while (i++ < SIZE)
    {
        cout << "a[" << i << "] : " << *(a + i - 1) << endl;
    }
    

    int *lastPtr = &a[SIZE - 1]; // last address of "a" array

    
    while (aptr++ <= lastPtr)
    {
        i++;
        cout << "a[" << i << "] : " << *(a + i - 1) << endl;
        cout << "a[" << i << "] : " << a[i - 1] << endl;
    }
    

    return 0;
}

*/

///////////////////////////////////////////////////
// ex 6
/*
#include <iostream>

using namespace std;

const int SIZE = 3;

int main()
{
    int a[SIZE] = {1000, 100, 10};
    //int *lastPtr = &a[SIZE - 1]; // last address of "a" array

    
    for (int *aptr = a; aptr <= lastPtr; aptr++)
    {
        cout << "a[" << i << "] : " << *aptr << endl;
        i++;
    }
    

    int *lastPtr = a + (SIZE - 1) + 5; // last address of "a" array
    
    cout << "Lastptr[-2] : " << lastPtr[-2] << endl;
    cout << "a[0] : " << a[0] << endl;
    
    for (int i = (-2 - 5); i < (-2 + 3 - 5); i++)
    {
        cout << "Lastptr[" << i << "] : " << lastPtr[i] << endl;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "a[i] : " << *a << endl;
        //a++;
    }

    return 0;
}
*/

///////////////////////////////////////////////////
// ex 7

/*
#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *aptr;

    int **aptrptr; //14 *
    int ***aptrptrptr;
    int ****apppp;

    aptr = &a;

    aptrptr = &aptr;
    aptrptrptr = &aptrptr;
    apppp = &aptrptrptr;

    cout << "a : " << *aptr << endl;
    cout << "a : " << **aptrptr << endl;
    cout << "a : " << ***aptrptrptr << endl;
    cout << "a : " << ****apppp << endl;

    cout << endl;

    cout << "address of a : " << aptr << endl;
    cout << "address of aptr : " << &aptr << endl;
    cout << "aptrptr : " << aptrptr << endl;
    cout << "address of aptrptr : " << aptrptrptr << endl;
    cout << "apppp : " << apppp << endl;

    cout << "size of int *** : " << sizeof(int ***) << endl;

    return 0;
}
*/

////////////////////////////////////////////////
// ex8
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main()
{
    int a[SIZE] = {1, 5, 7};
    int *aptr = a;
    int *bptr = &*(&*++aptr);
    int b = *&*(&*++aptr);

    cout << *(bptr + 1) << endl;
    cout << *aptr << endl;
    cout << b << endl;

    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }
    
    return 0;
}
*/

//////////////////////////////////////////////////
// ex9
/*
#include <iostream>

using namespace std;

// declaration

void changeVariableValue(int, int);
void changeVariableValue(int *, int);

int main()
{
    int a = 3;

    changeVariableValue(a, 7);

    cout << "a : " << a << endl;

    changeVariableValue(&a, 7);

    cout << "a : " << a << endl;

    return 0;
}

// function definition
void changeVariableValue(int a, int value)
{
    a = value;
}

void changeVariableValue(int *aptr, int value)
{
    *aptr = value;
}
*/

/////////////////////////////////////////
// ex10

#include <iostream>

using namespace std;

#define SIZE 3

void initializeArray(int *, int);
void displayArray(int *, int);

int main()
{
    int a[SIZE] = {1, 2, 3};

    initializeArray(a, SIZE);
    displayArray(a, SIZE);

    return 0;
}

// function definitio

void initializeArray(int *aptr, int size)
{

    //*(aptr + 0) = 5;
    //*(aptr + 1) = 7;
    //*(aptr + 2) = 12;

    int *lastPtr = aptr + size;
    int *firstPtr = aptr;
    int i = 1;
    while (firstPtr < lastPtr)
    {
        *firstPtr++ = (i++) * (i - 1);
    }
}

void displayArray(int *aptr, int size)
{
    int *lastPtr = aptr + size;
    int *firstPtr = aptr;
    int i = 0;
    while (firstPtr < lastPtr)
    {
        cout << "a[" << i << "] : " << *firstPtr << endl;
        i++;
        firstPtr++;
    }
}

// pointers
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
