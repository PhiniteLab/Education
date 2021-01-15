////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
// dynamic memory

/*

int a[10] = {0};        // compiler time allocation

memory 
****    10*4 = 40 byte
****
...
****

RUN TIME?

#include <cstdlib>

malloc, calloc, realloc, free functions


---- ----       // malloc
**** ****       // heap, compiler
---- ----       // malloc
**** ****
---- ----       // malloc

code segment
data segment
stack segment

////////////////////////////////
// malloc (memory allocation location)

malloc -> independent of type (void *)
malloc -> start address of heap memory block 

void *malloc(size_t nBytes)

*/

/////////////////////////////////////////////////
// ex1

/*
#include <cstdio>
#include <cstdlib>

void *checkedMalloc(size_t n)
{
    void *pd = (int *)malloc(sizeof(int) * n);
    if (!pd)
    {
        printf("cannot allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return pd;
}

int main()
{
    int n;
    int *pd;

    printf("How many elements do you require? : ");
    scanf("%d", &n);

    pd = (int *)checkedMalloc(n);

    for (int i = 0; i < n; i++)
    {
        //pd[i] = i;
        *(pd + i) = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("pd[%d] : %d ", i, *(pd + i));
    }
    printf("\n");

    return 0;
}
*/

/////////////////////////////////////////////////
// ex2
/*
// free (function) keyword

void free(void *vptr);

error type
(1) compile time array cannot be free!

int a[100];
..
free(a);    / syntax error

(2) after processing free, we cannot use pd variable

(3) int *pd = (int *)malloc(n*4);
...
free(pd + n/2)      // syntax

(4) memory leak

for {malloc()}



#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    int *pd;

    printf("How many elements do you require? : ");
    scanf("%d", &n);

    pd = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        *(pd + i) = i * i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("pd[%d] : %d\n", i, pd[i]);
    }

    free(pd);

    for (int i = 0; i < n; i++)
    {
        printf("pd[%d] : %d\n", i, pd[i]);
    }

    return 0;
}
*/

///////////////////////////////////////////////
// ex3
/*
#include <cstdlib>
#include <cstdio>
#include <ctime>

// function definition
void *getRandomNumber(int n, int low, int high)
{
    int *pd = (int *)malloc(sizeof(int) * n);

    for (int k = 0; k < n; k++)
    {
        pd[k] = rand() % (high - low + 1) + low;
    }

    return pd;
}

void displayArray(int *pd, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("pd[%d] : %d\n", i, *(pd + i));
    }
}

int main()
{
    int *pd;
    int n;

    printf("How many random number : ");
    scanf("%d", &n);

    srand(time(NULL));

    pd = (int *)getRandomNumber(n, 700, 800);
    displayArray(pd, n);

    free(pd);

    return 0;
}
*/

////////////////////////////////////////////////
// ex4
/*


p[5] -> char **

**** ****   mehet
**** ****   ali
**** ****   kemal
**** ****   canan
**** ****   alice



#include <cstdlib>
#include <cstdio>
#include <cstring>


char *getName()
{
    static char name[100];
    printf("Give a name : ");
    scanf("%s", name);

    return name;
}

char *getName()
{
    char name[100];

    char *pd;

    printf("Give a name :");
    scanf("%s", name);

    pd = (char *)malloc(sizeof(char) * (strlen(name) + 1));

    strcpy(pd, name);

    return pd;
}

int main()
{
    char *p[5];

    printf("Get 5 five names : \n");

    for (int k = 0; k < 5; k++)
    {
        p[k] = getName();
    }

    printf("Names coming from the Clients : \n");

    for (int k = 0; k < 5; k++)
        puts(p[k]);

    for (int k = 0; k < 5; k++)
        free(p[k]);

    return 0;
}
*/

/////////////////////////////////////////////////
// ex5
/*
#include <cstdlib>
#include <cstdio>
#include <cstring>

// strdup

#define SIZE 1000

char *strdup1(const char *p)
{
    char *pd = (char *)malloc(strlen(p) + 1);

    if (pd == NULL)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    return strcpy(pd, p);
}

char *strcon(const char *p1, const char *p2)
{
    char *pd = (char *)malloc(sizeof(char) * (strlen(p1) + strlen(p2) + 1));

    if (pd == NULL)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    strcpy(pd, p1);
    strcat(pd, p2);

    return pd;
}

int main()
{
    char str[SIZE];

    char *pd;
    char *pdCon;
    printf("Give a sentence : ");
    gets(str);
    //pd = strdup(str);
    pd = strdup1(str);
    pdCon = strcon(pd, strrev(pd));
    puts(pdCon);

    free(pd);
    free(pdCon);

    return 0;
}
*/

///////////////////////////////////////////////
/// ex6 - calloc => size + byte number
/*
#include <cstdlib>
#include <cstdio>
#include <cstring>

int main()
{
    int *pd;
    int n;

    printf("How many elements : ");
    scanf("%d", &n);

    // pd = (int *)malloc(n*sizeof(int));
    pd = (int *)calloc(n, sizeof(int));

    if (pd == NULL)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        pd[i] = i * i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("pd[%d] : %d\n", i, pd[i]);
    }

    return 0;
}
*/

///////////////////////////////////////////////
// ex7 -matrices
/*
#include <cstdlib>
#include <cstdio>
#include <cstring>

int main()
{
    int **pd;
    int row, col;

    printf("Enter the number of row and column elements : ");
    scanf("%d%d", &row, &col);

    pd = (int **)malloc(sizeof(int *) * row);
    // pd[address][integer]

    if (!pd)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < row; i++)
    {
        pd[i] = (int *)malloc(sizeof(int) * col);

        if (!pd[i])
        {
            printf("cannot allocate memory!\n");
            exit(EXIT_FAILURE);
        }
    }

    // assignment
    int counter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            pd[i][k] = counter;
            counter++;
        }
    }

    // display
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            printf("%d ", pd[i][k]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
        free(pd[i]);

    free(pd);

    return 0;
}
*/

///////////////////////////////////////////
// ex8 - realloc

/*

realloc -> increasing or decreasing dynamic memory size
void *realloc(void *vpBlock, size_t newSize)

size = 100
newSize = 400


#include <cstdlib>
#include <cstdio>
#include <cstring>

int main()
{
    int *pd;
    int n, nplus;

    printf("How many elements : ");
    scanf("%d", &n);

    pd = (int *)malloc(sizeof(int) * n);

    if (!pd)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        pd[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf(" pd[%d] = %d", i, pd[i]);
    }

    printf("\nHow many elements do you add to the array : ");
    scanf("%d", &nplus);

    pd = (int *)realloc(pd, sizeof(int) * (n + nplus));
    // pd = (int *)realloc(NULL,sizeof(int) * (n + nplus));

    if (!pd)
    {
        printf("cannot allocate memory!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = n; i < n + nplus; i++)
    {
        pd[i] = i * i;
    }

    for (int i = 0; i < (n + nplus); i++)
    {
        printf(" pd[%d] = %d", i, pd[i]);
    }

    free(pd);
    // realloc(pd,0)

    return 0;
}*/

/////////////////////////////////////////////////////
// ex9 - realloc example

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>

int main()
{
    int *pd = NULL;
    int n = 0;
    int ch, val;

    for (;;)
    {
        printf("Enter a new integer value for memory : ");

        while ((ch = toupper(getchar())) != 'E' && ch != 'H')
            ;

        printf("\n%c\n", ch);

        if (ch == 'H')
            break;

        printf("Give a number :");
        scanf("%d", &val);
        printf("val = %d\n", val);

        pd = (int *)realloc(pd, sizeof(int) * (n + 1));

        if (pd == NULL)
        {
            printf("cannot allocate memory!\n");
            exit(EXIT_FAILURE);
        }
        pd[n++] = val;

        printf("You enter %d elements to the dynamic array\n", n);

        for (int i = 0; i < n; i++)
        {
            printf(" pd[%d] = %d", i, pd[i]);
        }
        printf("\n");
    }

    return 0;
}

// dynamic memory
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
