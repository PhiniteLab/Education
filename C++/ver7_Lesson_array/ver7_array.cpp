////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
// Arrays

/*
() -> calling
main -> address
main()

[] -> calling
arrayName -> address

SYNTAX

type arrayName[arraySIZE]

int a[10] ->  int (2 byte),  a -> start address, 2*10 = 20 byte in memory

*/

////////////////////////////////////////////////
// ex1
/*
#include <iostream>

using namespace std;

int main()
{
    // initialize

    //int a[5]; // garbage value

    //int a[3] = {5, 4, 2}; // 0,5 1,4 2,2 (3,NULL '\0')
    //cout << "first element " << a[0] << endl;
    //cout << "second element " << a[1] << endl;
    //cout << "third element " << a[2] << endl;

    //int a[] = {3, 4, 5};

    //cout << "first element " << a[0] << endl;
    //cout << "second element " << a[1] << endl;
    //cout << "third element " << a[2] << endl;

    // assignment

    //a[2] = 50;

    //cout << "first element " << a[0] << endl;
    //cout << "second element " << a[1] << endl;
    //cout << "third element " << a[2] << endl;

    int a[3];

    cout << "first element " << a[0] << endl;
    cout << "second element " << a[1] << endl;
    cout << "third element " << a[2] << endl;

    return 0;
}
*/

/////////////////////////////////////
// ex2
/*
#include <iostream>

int func(int);

using namespace std;

int main()
{
    int array[10];
    int i = 0;

    
    for (int i = 0; i < 10; i++)
    {
        array[i] = 1;
    }
    
    
    while (i < 10)
    {
        array[i] = 1;
        i = i + 1;
    }
    
    
    while (i < 10)
    {
        array[i++] = i;
    }

    
    while (i < 10)
    {
        array[++i] = i;     // array[0] is not assigned
    }


    
    while (i++ < 10)
    {
        array[i - 1] = i;
    }
    

    while (i < 10)
    {
        array[func(i)] = i;
        i = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "array[" << i << "]  : " << array[i] << endl;
    }

    //cout << array[360] << endl; // run time error
    //cout << array[12] << endl; // run time error

    return 0;
}

int func(int i)
{
    return i;
}
*/

//////////////////////////////////////////////////////////
// multi-dimensional array

/*

int a[3] = {1,2,3};     3x1

a -> pointer

type nameArray[size1][size2]

3,2,1
5,6,7
3,4,4

3   -> a[0][0]
2
1

5   -> a[1][0]
6
7

3   -> a[2][0], int => a[1][] -> pointer,   a -> pointer to pointer
4
4

int a[3][2]

[2] -> integer
a[3] -> pointer

a -> pointer to pointer


*/

//////////////////////////////////////////////////
// multi dimensional array - ex2
/*
#include <iostream>

using namespace std;

#define SIZE1 2
#define SIZE2 2
#define SIZE3 2

int main()
{
    //int a[2][2];

    int b[2] = {3, 4};                      // b-> address
    int a[SIZE1][SIZE2] = {{1, 2}, {3, 4}}; // a[] -> address,   a -> adress of address

    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            cout << "a[" << i << "][" << j << "] : " << a[i][j] << endl;
        }
    }

    int c[SIZE1][SIZE2][SIZE3];

    int counter = 0;
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE2; j++)
        {
            for (int k = 0; k < SIZE3; k++)
            {
                counter = counter + 1;
                c[i][j][k] = counter;
                cout << "c[" << i << "][" << j << "][" << k << "] : " << c[i][j][k] << endl;
            }
        }
    }

    // size3 -> integer
    // size2 -> integer address
    // size1 -> integer adress of address
    // c -> integer address of adress of address

    return 0;
}
*/

////////////////////////////////////////////////////
// address -> pointer

/*

data type / pointer type

int     -> int *
double  -> double *
float   -> float *
char    -> char *

*/

/////////////////////////////////////////////
// ex3
/*
#include <iostream>

using namespace std;

#define SIZE1 3

int main()
{
    int a[SIZE1] = {1, 2, 3};
    int *a_ptr; // address

    a_ptr = a;

    // display

    for (int i = 0; i < SIZE1; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    for (int i = 0; i < SIZE1; i++)
    {
        cout << "a_ptr[" << i << "] : " << a_ptr[i] << endl;
    }

    cout << "Address of a[] : " << a << endl;
    cout << "Address of a_ptr[] : " << a_ptr << endl;

    // different type

    double b = 5.2;
    double *b_ptr;

    b_ptr = &b;

    cout << "Address of b : " << &b << endl;
    cout << "Address of b_ptr : " << b_ptr << endl;

    return 0;
}
*/

///////////////////////////////////////////////////
///// pointer - array relation
/*
#include <iostream>

using namespace std;

#define SIZE 3

int main()
{
    int counts[SIZE] = {100, 200, 150}; // 12 bytes
    int *counts_ptr;

    counts_ptr = counts;

    // counts[i] => *(counts + i)
    // * -> asterisk operator => reaching value within its address
    // & -> address operator => address of some variable type

    for (int i = 0; i < SIZE; i++)
    {
        cout << "counts[" << i << "]  :  " << counts[i] << endl;
        cout << "counts[" << i << "]  :  " << *(counts + i) << endl;
        cout << "counts_ptr[" << i << "]  :  " << *(counts_ptr + i) << endl;
        cout << "address of counts : " << &counts[i] << endl;
        cout << "address of counts : " << (counts + i) << endl;
        cout << "address of counts_ptr : " << (counts_ptr + i) << endl;
    }

    int a = 5;
    double b = 8.2;

    int *aptr = &a;
    double *bptr = &b;

    cout << "aptr : " << aptr << endl;
    cout << "aptr - 1 : " << aptr - 1 << endl;

    cout << "bptr : " << bptr << endl;
    cout << "bptr - 1 : " << bptr - 1 << endl;

    return 0;
}
*/

/////////////////////////////////////////////
// pointer-array to function usage

#include <iostream>

using namespace std;

#define SIZE 3

// function declaration

void initializeArray(int *a, int size); // ADDRESS, initial addres
void displayArray(int *a, int size);
double meanArray(int *a, int size);

//void initializeArray(int a[SIZE], int size);    // ADDRESS, the whole address
//void displayArray(int a[SIZE], int size);

//void initializeArray(int a[], int size);    // ADDRESS, initial address
//void displayArray(int a[], int size);

int main()
{
    int a[SIZE];

    initializeArray(a, SIZE);
    displayArray(a, SIZE);

    double meanValue = meanArray(a, SIZE);

    cout << "Mean value of an array : " << meanValue << endl;
    cout << "Mean value of an array : " << meanArray(a, SIZE) << endl;

    cout << "Address of a : " << a << endl;

    return 0;
}

void initializeArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(a + i) = i * 10 + 7 - i ^ 2; // *(a + i) = i
    }
}

void displayArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl; // *(a + i)
    }
}

double meanArray(int *a, int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + *(a + i);
    }

    double meanValue = sum / (size);

    return meanValue;
}

// Arrays
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
