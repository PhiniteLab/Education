#ifndef __SYSTEM_DYNAMIC_HPP__
#define __SYSTEM_DYNAMIC_HPP__

typedef struct systemParameters
{
    double dt;
    double t_initial;
    double t_final;
    double x0;
    double firstParam;
    double secondParam;

} SYSTEM_PARAMETERS;

// standard functions
void displaySystemResults(double *state, double *input, const int SIZE);

// solver dynamic functions
void forwardDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef);
void backwardDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef);
void centralDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef);

// overloading
void forwardDifferenceSolver(SYSTEM_PARAMETERS sys);
void backwardDifferenceSolver(SYSTEM_PARAMETERS sys);
void centralDifferenceSolver(SYSTEM_PARAMETERS sys);

// array operation
void initializeStateVariable(double *state, const int SIZE, double value, double initCond);
void initializeInputVariable(double *input, const int SIZE, double value);

#endif