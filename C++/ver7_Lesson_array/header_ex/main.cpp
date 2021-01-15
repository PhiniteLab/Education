//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
// header - source file example
#include <iostream>
#include "array.hpp"

using namespace std;

// declaration
#define SIZE 10

// execute
/*
int main()
{
    int arr1[SIZE];

    initializeArray(arr1, SIZE);
    displayArray(arr1, SIZE);

    double meanArrayValue = meanArray(arr1, SIZE);

    cout << "Mean of the array is : " << meanArrayValue << endl;

    double sumValue = sumArray(arr1, SIZE);

    cout << "Sum of the array is : " << sumValue << endl;

    int arr2[SIZE];

    initializeArray(arr2, SIZE);
    displayArray(arr2, SIZE);

    int resultArray[SIZE];

    return 0;
}
*/

int main()
{
    int arr1[SIZE];

    initializeArray(arr1, SIZE);

    int arr2[SIZE];

    initializeArray(arr2, SIZE);

    int resultArray[SIZE];

    int *resultArray2;

    resultArray2 = productTwoArray(arr1, arr2, resultArray, SIZE);

    displayArray(resultArray2, SIZE);

    return 0;
}
// definition

// header - source file example
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
