//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
// Data Structure

/*

structure -> using by different types of data variables

// syntax

struct [variable name] {

    type1 data;
    type2 data2;

} [one or more structure variables];



*/
/*
#include <iostream>
#include <cstring>

using namespace std;

/////////////////////////////7
// structure

typedef struct Student
{
    char Name[20];
    int points;
    double meanAveragePoint;
} Students;

typedef Students *PointerStudents;

void studentUpdateInfo(Students *studentVar);

int main()
{
    //struct Student Mehmet;
    Students Mehmet;
    PointerStudents ptrMehmet = &Mehmet;

    
    Mehmet.meanAveragePoint = 3.15;
    Mehmet.points = 70;
    strcpy(Mehmet.Name, "Mehmet");
    

    studentUpdateInfo(ptrMehmet);

    cout << "Mehmet's meanAveragePoints : " << Mehmet.meanAveragePoint << endl;
    cout << "Mehmet's point : " << Mehmet.points << endl;
    cout << "Mehmet's name : " << Mehmet.Name << endl;

    return 0;
}

// function definition
void studentUpdateInfo(Students *studentVar)
{
    strcpy(studentVar->Name, "Mehmet");
    studentVar->meanAveragePoint = 3.75;
    studentVar->points = 80;
}
*/
//////////////////////////////////////////////////////////
// ex2

#include <iostream>
#include <cstring>

using namespace std;

/////////////////////////////7
// structure
/*
typedef struct StringOperation
{
    char Name[50];
    char SurName[50];

} StrStructOperation;

typedef struct Student
{
    StrStructOperation info;
    int points;
    double meanAveragePoint;
} Students;

typedef Students *PointerStudents;

void studentUpdateInfo(Students *studentVar);

int main()
{
    //struct Student Mehmet;
    Students Mehmet;
    PointerStudents ptrMehmet = &Mehmet;

    studentUpdateInfo(ptrMehmet);

    cout << "Student's meanAveragePoints : " << Mehmet.meanAveragePoint << endl;
    cout << "Student's point : " << Mehmet.points << endl;
    cout << "Student's name : " << Mehmet.info.Name << endl;
    cout << "Student's SurName : " << Mehmet.info.SurName << endl;

    cout << endl;

    cout << "Student's meanAveragePoints : " << ptrMehmet->meanAveragePoint << endl;
    cout << "Student's point : " << ptrMehmet->points << endl;
    cout << "Student's name : " << ptrMehmet->info.Name << endl;
    cout << "Student's SurName : " << ptrMehmet->info.SurName << endl;

    return 0;
}

// function definition
void studentUpdateInfo(Students *studentVar)
{

    studentVar->meanAveragePoint = 3.75;
    studentVar->points = 80;
    strcpy(studentVar->info.Name, "Mehmet");
    strcpy(studentVar->info.SurName, "ISCAN");
}

*/
//////////////////////////////////////////////////////////
// ex3

/*
#include <iostream>
#include <cstring>

using namespace std;

typedef struct student
{
    char Name[50];
    char SurName[50];
    double point;
} Student;

#define STUDENT_SIZE 3

enum Choices
{
    Continue = 0,
    AddStudentChoice = 1,
    DisplayStudentChoice = 2,
    Exit = -1
};

// function decleration
void inputStudentInfo(Student *);
void displayStudentInfo(Student *);
void EmptySpace(void);
void displayProgramInfo(void);

static int studentNumber = 0;

int main()
{
    Student stud[STUDENT_SIZE];
    Student *studPtr = stud;

    int choice = 0;

    while (choice != -1)
    {
        displayProgramInfo();
        cout << "Select the proper action : ";

        cin >> choice;

        switch (choice)
        {
        case AddStudentChoice:
            inputStudentInfo(studPtr);
            break;
        case DisplayStudentChoice:
            displayStudentInfo(studPtr);
            break;
        case Exit:
            choice = -1;
            cout << "Bye bye..." << endl;
            break;
        default:
            cout << "Please select proper choices..!" << endl;
            break;
        }
    }

    return 0;
}

// function definition
void inputStudentInfo(Student *studPtr)
{
    char intName[50];
    char intSurName[50];

    cout << "Student Name : " << endl;
    cin >> intName;
    strcpy((*(studPtr + studentNumber)).Name, intName);
    cout << "Student SurName : " << endl;
    cin >> intSurName;
    strcpy((*(studPtr + studentNumber)).SurName, intSurName);
    cout << "Student Point : " << endl;
    cin >> (*(studPtr + studentNumber)).point;
    cout << endl;

    studentNumber++;
}

void displayStudentInfo(Student *studPtr)
{
    for (int i = 0; i < studentNumber; i++)
    {
        cout << "Student Name : " << (*(studPtr + i)).Name << endl;
        cout << "Student SurName : " << (*(studPtr + i)).SurName << endl;
        cout << "Student Point : " << (*(studPtr + i)).point << endl;
        cout << endl;
    }
}

void EmptySpace(void)
{
    cout << endl;
    cout << endl;
    cout << "STUDENT LIST" << endl;
    cout << endl;
}

void displayProgramInfo()
{
    cout << "Add Student : 1" << endl;
    cout << "Display Students : 2" << endl;
    cout << "Exit : -1" << endl;
    cout << endl;
}
*/

//////////////////////////////////////////////////////////
// ex4
/*
#include <iostream>

using namespace std;

typedef struct exSt2
{
    double c;
} St2;

typedef struct exSt
{
    int a;   // 4
    St2 st2; //

} St;


double a
double b
double c

**** ****
**** ****
**** ****

double a
int b

**** ****
****



int main()
{
    St st;

    cout << "Size of st : " << sizeof(St) << endl;

    return 0;
}
*/

// Data Structure
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
