#include <iostream>
#include "myString.hpp"

//using namespace std;

int __myStrFunc mystrlen(const char *str)
{
    int i = 0;
    /*
    while (*str != '\0')
    {
        str++;
        i++;
    }
    */
    while (*str++ != '\0')
    {
        i++;
    }

    return i;
}

int __myStrFunc mystrlen2(const char *str)
{
    int i;

    /*
    for (i = 0; str[i] != '\0'; i++)
        ;
    */

    for (i = 0; *(str + i) != '\0'; i++)
        ;
    return i;
}

bool __myStrFunc mystrcmp(const char *str1, const char *str2)
{
    /*
    while (*str1 == *str2)
    {
        if (*str1 == '\0' || *str2 == '\0')
            break;

        str1++;
        str2++;
    }
    */
    while (*str1++ == *str2++)
    {
        if (*str1 == '\0' || *str2 == '\0')
            break;
    }

    if (*str1 == '\0' && *str2 == '\0')
        return true;
    else
    {
        return false;
    }
}

char *__myStrFunc mystrcat(char *dest, const char *source)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; source[j] != '\0'; j++)
    {
        dest[i + j] = source[j];
    }

    dest[i + j] = '\0';

    return dest;
}

char *__myStrFunc mystrchr(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
            return str;

        str++;
    }

    if (*str == ch)
        return str;

    return NULL;
}

char *__myStrFunc mystrchr2(char *str, char ch)
{
    char *str_start = str;

    while (*str != '\0')
    {
        if (*str == ch)
            return str;

        str++;
    }

    if (*str == ch)
        return str_start;

    return NULL;
}

char *__myStrFunc mystrcat2(char *dest, const char *source)
{
    int i = mystrlen(dest);
    int j;

    for (j = 0; source[j] != '\0'; j++)
    {
        dest[i + j] = source[j];
    }

    dest[i + j] = '\0';

    return dest;
}

char *__myStrFunc mystrcpy(char *dest, const char *source)
{
    int i;

    std::cout << "MyStrcpy is calling..." << std::endl;

    if (mystrlen(dest) >= mystrlen(source))
    {
        for (i = 0; source[i] != '\0'; i++)
        {
            dest[i] = source[i];
        }

        dest[i] = '\0';
    }
    else
    {
        std::cout << "Size of Dest is smaller than size of source!" << std::endl;
        return NULL;
    }

    std::cout << "MyStrcpy is complete..." << std::endl;

    return dest;
}

char *__myStrFunc mystrcpy2(char *dest, const char *source, int size)
{
    int i;
    int destLen = size;
    int sourceLen = mystrlen(source);

    std::cout << "MyStrcpy is calling..." << std::endl;

    if (destLen >= sourceLen)
    {
        for (i = 0; source[i] != '\0'; i++)
        {
            dest[i] = source[i];
        }

        dest[i] = '\0';
    }
    else
    {
        std::cout << "Size of Dest is smaller than size of source!" << std::endl;
        for (i = 0; i < destLen; i++)
        {
            dest[i] = source[i];
        }

        dest[i] = '\0';
    }

    std::cout << "MyStrcpy is complete..." << std::endl;

    return dest;
}