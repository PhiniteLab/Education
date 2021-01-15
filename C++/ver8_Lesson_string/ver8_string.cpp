/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
// STRING EXAMPLES - EXPLANATIONS

/*

int a = 5;          //number - binary 0000 0101
double b = 5.2;
float = 3.14;

character?

cout << "Hello" << endl;

"char" -> word, alphabet        1 byte

char[] = "Hello"       -> string


C++/C

C -> string (char array)
C++ -> string class

*/

/////////////////////////////////////////
// ex1
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c = 'H';

    cout << "size of char : " << sizeof(char) << endl;
    cout << "C : " << c << endl;

    char firstMessage[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "First message : " << firstMessage << endl;

    return 0;
}
*/

///////////////////////////////////////////
// ex2

// strcpy -> copy str1 to str2
// strcat -> concatenates str2 onto str1
// strlen -> length of str
// strcmp -> compare both str1 and str2
// strchr -> searching specific characters

/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[10] = "Ali"; // const char *
    char str2[10] = "Veli";
    char str3[10];

    char *str4;

    strcpy(str3, str1);

    //cout << "strcpy for str3 to str1 : " << str3 << endl;
    cout << "strcpy for str3 to str1 : " << strcpy(str3, str1) << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "str3[" << i << "] : " << str3[i] << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i < 15; i++)
    {
        if (i > 9)
        {
            str1[i] = 'a';
        }

        cout << "str1[" << i << "] : " << *(str1 + i) << endl;
    }
    

    for (int i = 0; i < 10; i++)
    {
        str4[i] = str1[i];

        cout << "str4 : " << str4[i] << endl;
    }

    cout << "Str4 address : " << &str4[0] << endl;
    cout << "Str1 address : " << &str1[0] << endl;

    return 0;
}
*/

////////////////////////////////////////////////////
// ex3

// strcpy -> copy str1 to str2
// strcat -> concatenates str2 onto str1
// strlen -> length of str
// strcmp -> compare both str1 and str2
// strchr -> searching specific characters

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[11] = "Hello";
    char str2[10] = "World";
    char str3[10];

    /*
    strcat(str1, " ");
    strcat(str1, str2);

    cout << "strcat result : " << str1 << endl;
    */
    /*
    int len = strlen(str1);

    cout << "Length of str : " << len << endl;
*/
    /*
    int cmpValue = strcmp(str1, str2);

    if (cmpValue == 0)
    {
        cout << "Str1 is equal to str2" << endl;
    }
    else
    {
        cout << "Str1 is not equal to str2" << endl;
    }
    */

    int ch = 'e';

    char *p = strchr(str1, ch);

    cout << "String starting from " << ch << " is : " << p << endl;

    return 0;
}

// STRING EXAMPLES - EXPLANATIONS
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
