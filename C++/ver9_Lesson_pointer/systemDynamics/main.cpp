//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
// SYSTEM DYNAMICS

/*

ax^2 + bx + c = 0
(x - x1)*(x - x2) = 0       // root

xdot = dx/dt

xdot = a*x^2        // continuous

Matlab -> standard solution

continuous -> discrete

solver (forward - backward - central)

example:

xdot = a*x

(1) discretezation

xdot = (x[i+1] - x[i])/dt

(x[i+1] - x[i])/dt = a*x[i]

x[i+1] = x[i] + dt*(a*x[i])     // forward difference solver

Mechatronic -> system -> w.r.t time -> require solver

system dynamic
control theory

*/

/////////////////////////////////////////////////////////
// ex1
/*
#include <iostream>
#include "systemDynamic.hpp"

using namespace std;

// xdot = dx/dt = a*x + b*u  -> continuous
// (x[i+1] - x[i])/dt = a*x[i] + b*u[i]
// discrete form => x[i+1] = x[i] + dt*(a*x[i] + b*u[i])  -> array,pointer
// forward difference equation


//x[1] = x[0] + dt*(a*x[0] + b*u[0]) 
//x[2] = x[1] + dt*(a*x[1] + b*u[1]) 
//...

//x[100+1] = x[100] + dt*(a*x[100] + b*u[100])


int main()
{
    ///////////////////////////////////////
    // parameters
    double dt = 0.1; // second

    double t_initial = 0.0;
    double t_final = 5.0;

    double x0 = 0.0;

    // system coefficient
    double a = -2;
    double b = 1;

    const int SIZE = (t_final - t_initial) / dt;

    // parameters
    //////////////////////////////////////

    //////////////////////////////////////
    // system array

    double x[SIZE]; // system state array
    double u[SIZE]; // system input array

    // system array
    //////////////////////////////////////

    //////////////////////////////////////
    // input variable - initialization of state

    initializeStateVariable(x, SIZE, 1.2, 0.0);
    initializeInputVariable(u, SIZE, 10.0);

    // input variable
    //////////////////////////////////////

    //////////////////////////////////////
    // iteration
    forwardDifferenceSolver(x, u, SIZE, dt, a, b);
    displaySystemResults(x, u, SIZE);

    // iteration
    //////////////////////////////////////

    return 0;
}
*/

///////////////////////////////////////////
// ex2
#include <iostream>
#include "systemDynamic.hpp"

using namespace std;

int main()
{
    SYSTEM_PARAMETERS sys1;

    sys1.dt = 0.1;
    sys1.firstParam = -1;
    sys1.secondParam = 10;
    sys1.t_final = 5.0;
    sys1.t_initial = 0.0;
    sys1.x0 = 0.0;

    forwardDifferenceSolver(sys1);

    return 0;
}
// SYSTEM DYNAMICS
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
