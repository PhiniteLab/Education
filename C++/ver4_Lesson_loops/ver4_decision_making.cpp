//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
// decision making

/*

condition - statement -> true, false => different function, process

if
if..else
switch

nested if,switch

*/
/* ex1
#include <iostream>

using namespace std;

int main()
{ // if example

    int a = 15;
    //if ((a > 25) != 0)
    if (a > 25)
    {
        int b = 5;
        cout << "B is " << b << endl;
        cout << "A is greater than 5" << endl;
    }
    else
    {
        int c = 5;
        cout << "C is " << c << endl;
        cout << "A is not greater than 5" << endl;
    }

    return 0;
}
*/

//////////////////////////////////
// switch

/*

switch(exp) {
    case constant_exp :
        statement(s)
        break;
    case constant_exp :
        statement(s)
        break;

    default:
        statement(s);


}

*/

#include <iostream>

using namespace std;

int main()
{
    int score = 25;

    switch (score)
    {
    case 25:
    {
        if (score != 25)
            cout << "Fail " << endl;
        else
            cout << "Maybe next time" << endl;

        for (int i = 0; i < 5; i++)
            cout << "for loop with the index of " << i << endl;

        break;
    }
    case 50:
    {
        cout << "Normal " << endl;
        break;
    }

    case 75:
    {
        cout << "Success " << endl;
        break;
    }

    default:
    {
        cout << "Invalid argument " << endl;
        break;
    }
    }

    return 0;
}

// decision making
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
