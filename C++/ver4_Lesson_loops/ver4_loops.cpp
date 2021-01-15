//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
// LOOPS

/*

execute code several times depending on some conditions

while   -> until condition is false, it continues
for     -> specific steps size

do..while

*/

////////////////////////////////////
// while

/*

while(condition)
{
    statement(s);    
}

*/

///////////////////////////
/*ex1
#include <iostream>

using namespace std;

int main()
{
    int iter = 0;
    
    while (iter < 10)
    {
        cout << "Hello CPP " << iter << endl;
        iter++;
    }


    // while((iter++ < 10) != 0)
    while (iter++ < 10) // if it is true, it continues
    {
        cout << "Hello CPP " << iter << endl;
    }

// while(1 != 0)
while (1) // endless loop
{
    cout << "Hello CPP " << endl;
}

return 0;
}

*/

//////////////////////////////////////////////////////
// for loop

/*

for (initial; condition; increment)
{
    statement(s);
}

*/
/*
#include <iostream>

using namespace std;

int main()
{
    
    for (int iter = 0; iter < 10; iter = iter + 1)
    {
        cout << "hello cpp " << iter << endl;
    }
    

    
    int a = 0;

    for (;a < 10;) //endless loop
    {
        cout << "hello cpp " << endl;
    }
    

    
                        // (1) == 0
    for (int iter = 10; (iter > 0) == 0; iter = iter - 1)
    {
        cout << "hello cpp " << iter << endl;
    }
    
    
    int iter = 0;
    for (; iter < 10;)
    {
        cout << "hello cpp " << iter << endl;
        iter = iter + 1;
    }


    
    for (int iter = 0; iter < 10; iter = iter + 1)
    {
        cout << "hello cpp " << iter << endl;
        iter = iter + 1;
    }

    
    int iter2 = 0;
    int iter3 = 0;

    for (int iter = 0; ((iter < 10) && (iter2 < 5) && (iter3 < 3)) != 0; iter = iter + 1)
    {
        cout << "hello cpp " << iter << endl;
        iter2 = iter2 + 1;
        iter3 = iter3 + 1;
    }

    for (;;)
    {
        cout << "Endless loop" << endl;
    }
    


    return 0;
}
*/

////////////////////////////////////////////////
// do ... while
/*
#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    while (a < 5)
    {
        cout << "Normal While Loop " << a << endl;
        a = a + 1;
    }

    a = 0;

    do
    {
        cout << "Do While Loop " << a << endl;
        a = a + 1;
    } while (a < 5);

    return 0;
}
*/

///////////////////////////////////////////////
// nested loop

/*
for() {

    for ()
    {

    }
}

for() {

    while()
    {
        
    }
}

*/

#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 3; i++) // running
    {
        cout << "i loop" << endl;
        for (j = 0; j < 3; j++) // breaking
        {                       // filling up multi dimensional array, class, sorting
            if (i >= 1)
                break;

            cout << "i and j : " << i << " " << j << endl;
        }
    }

    return 0;
}

// LOOPS
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
