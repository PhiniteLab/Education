/*#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;*/

/* built -in CPP compiler object

type - int, double, float, short int
long int 

*/

/* ex1
int main()
{
    // number definition
    short s; // store bytes
    int i;
    double d;

    // assignment
    s = 10;
    i = 100;
    d = 3094.24;

    cout << "short  s : " << s << endl;
    cout << "int    i : " << i << endl;
    cout << "double d : " << d << endl;

    return 0;
}
*/

//////////////////////////////
// ex2 - math operation

/*

cos()
sin()
pow()
sqrt()

*/
/*
int main()
{
    // number definition
    short s; // store bytes
    int i;
    double d;

    // assignment
    s = 1;
    i = 10;
    d = 1.44;

    cout << "short  sin(s) : " << sin(s) << endl;
    cout << "int    pow(i,2) : " << pow(i, 2) << endl;
    cout << "double sqrt(d) : " << sqrt(d) << endl;

    return 0;
}*/

//////////////////////////////////////////
// ex3 - Random Number in C++
/*
int main()
{
    int i, j;

    // seed value
    srand((unsigned)time(NULL));

    for (i = 0; i < 5; i++)
    {
        // generate random number
        j = rand();
        cout << "Random number is : " << j << endl;
    }

    return 0;
}*/

//////////////////////////////////////////////////////
// simple dice-roll application

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie(int rollValue)
{
    int roll;
    int min = 1;
    int max = 6;

    // roll = rand() % (max - min + 1) + min;

    roll = ((rollValue * 100 - 5) / (6) + 2) % (max - min + 1) + min;

    return roll;
}

int main()
{
    srand((unsigned)time(NULL)); // seed value
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Rolling Dice : " << rollDie(i * (k + 1)) << " " << rollDie((k + 1) * 5 + i) << endl;
        }
        cout << endl;
    }

    return 0;
}