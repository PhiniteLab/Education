/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
// STRING EXAMPLES - EXPLANATIONS

////////////////////////////////////////////////////
// ex3

// strcpy -> copy str1 to str2
// strcat -> concatenates str2 onto str1
// strlen -> length of str
// strcmp -> compare both str1 and str2
// strchr -> searching specific characters

#include <iostream>
#include <cstring>
#include "myString.hpp"

using namespace std;

int main()
{
    char str1[15] = "Hello World";
    char str2[15] = " World";
    char str3[5];
    /*
    int len = strlen(str1);
    int mylen = mystrlen2(str1);

    cout << "Length of str : " << len << endl;
    cout << "Length of str : " << mylen << endl;

    int cmpValue = strcmp(str1, str2);
    bool mycmpValue = mystrcmp(str1, str2);

    if (cmpValue == 0)
    {
        cout << "Str1 is equal to str2" << endl;
    }
    else
    {
        cout << "Str1 is not equal to str2" << endl;
    }

    if (mycmpValue == true)
    {
        cout << "Str1 is equal to str2" << endl;
    }
    else
    {
        cout << "Str1 is not equal to str2" << endl;
    }

    //cout << "strcat result : " << strcat(str1, str2) << endl;
    cout << "strcat result : " << mystrcat2(str1, str2) << endl;
    

    char ch = 'l';

    char *p1 = strchr(str1, ch);
    char *p2 = mystrchr2(str1, ch);

    cout << "String starting from " << ch << " is : " << p1 << endl;
    cout << "String starting from " << ch << " is : " << p2 << endl;

    */
    cout << "str3 len : " << mystrlen(str3) << endl;

    //char *p1 = strcpy(str3, str1);
    char *p2 = mystrcpy2(str3, str1, 5);

    cout << "str3 : " << str3 << endl;
    cout << "str3 : " << p2 << endl;

    return 0;
}

// STRING EXAMPLES - EXPLANATIONS
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
