#include <iostream>
#include "systemDynamic.hpp"

using namespace std;

void displaySystemResults(double *state, double *input, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "State : " << *(state + i) << " Input : " << *(input + i) << endl;
    }
}

void initializeStateVariable(double *state, const int SIZE, double value, double initCond)
{
    /*
    for (int i = 0; i < SIZE; i++)
    {
        state[i] = value;
    }

    state[0] = initCond;
    */

    /*int i = 0;
    while (i < SIZE)
    {
        state[i] = value;
        i++;
    }*/

    double *ptrLast = &state[SIZE - 1];
    *state++ = initCond;
    while (state < ptrLast)
    {
        *state++ = value;
    }
}
void initializeInputVariable(double *input, const int SIZE, double value)
{
    for (int i = 0; i < SIZE; i++)
    {
        input[i] = value;
    }
}

void backwardDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef)
{
    for (int i = 1; i < SIZE; i++)
    {
        state[i] = state[i - 1] + dt * (firstCoef * state[i - 1] + secondCoef * input[i - 1]); // forward difference equation
    }
}
void centralDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef)
{
    for (int i = 1; i < SIZE; i++)
    {
        state[i + 1] = state[i - 1] + 2 * dt * (firstCoef * state[i - 1] + secondCoef * input[i - 1]); // forward difference equation
    }
}

void forwardDifferenceSolver(double *state, double *input, const int SIZE, double dt, double firstCoef, double secondCoef)
{
    for (int i = 0; i < SIZE; i++)
    {
        state[i + 1] = state[i] + dt * (firstCoef * state[i] + secondCoef * input[i]); // forward difference equation
    }
}

/// system Parameters structure overloading

void forwardDifferenceSolver(SYSTEM_PARAMETERS sys)
{
    double *state;
    double *input;
    const int SIZE = (sys.t_final - sys.t_initial) / sys.dt;

    state = (double *)malloc(sizeof(double) * SIZE);
    input = (double *)malloc(sizeof(double) * SIZE);

    initializeStateVariable(state, SIZE, 1.2, 0.0);
    initializeInputVariable(input, SIZE, 10.0);

    for (int i = 0; i < SIZE; i++)
    {
        state[i + 1] = state[i] + sys.dt * (sys.firstParam * state[i] + sys.secondParam * input[i]);
    }

    displaySystemResults(state, input, SIZE);
}

void centralDifferenceSolver(SYSTEM_PARAMETERS sys)
{
    double *state;
    double *input;
    const int SIZE = (sys.t_final - sys.t_initial) / sys.dt;

    state = (double *)malloc(sizeof(double) * SIZE);
    input = (double *)malloc(sizeof(double) * SIZE);

    initializeStateVariable(state, SIZE, 1.2, 0.0);
    initializeInputVariable(input, SIZE, 10.0);

    for (int i = 1; i < SIZE; i++)
    {
        state[i + 1] = state[i - 1] + 2 * sys.dt * (sys.firstParam * state[i - 1] + sys.secondParam * input[i - 1]);
    }

    displaySystemResults(state, input, SIZE);
}

void backwardDifferenceSolver(SYSTEM_PARAMETERS sys)
{
    double *state;
    double *input;
    const int SIZE = (sys.t_final - sys.t_initial) / sys.dt;

    state = (double *)malloc(sizeof(double) * SIZE);
    input = (double *)malloc(sizeof(double) * SIZE);

    initializeStateVariable(state, SIZE, 1.2, 0.0);
    initializeInputVariable(input, SIZE, 10.0);

    for (int i = 1; i < SIZE; i++)
    {
        state[i] = state[i - 1] + sys.dt * (sys.firstParam * state[i - 1] + sys.secondParam * input[i - 1]);
    }

    displaySystemResults(state, input, SIZE);
}