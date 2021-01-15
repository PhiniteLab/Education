#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

////////////////////////////////////
// decleration

// array operation
void initializeArray(int *a, int SIZE);
void displayArray(int *a, int SIZE);

// mathematical calculation

double sumArray(int *a, int SIZE);
double meanArray(int *a, int SIZE);

// array - mathematical calculation
int *sumTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE);
int *substractTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE);
int *productTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE);

#endif