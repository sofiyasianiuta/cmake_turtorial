/* Makefile tutorial TFY4235
 * C++ example
 * Written January 2023
 * Author: Jonas Frafjord
 */

#include <iostream>
#include <iomanip>
#include "WPmod.cpp"
#include "functionmod.h"

using namespace std;

int main(){
    float x_single;
    double x_double;

    cout << "\n\n************** Program has started! *****************\n\n";

    cout << "This is a Makefile tutorial and also demonstrates loss of precision\n";
    cout << "The topic of numbers will be covered in the lectures later, but something to have in mind for now.\n\n";

    cout << "Single precision can give disastrous results one should be aware of.\n";
    x_single = 1e-9;
    x_double = 1e-9;
    cout << setprecision(8);
    cout << "Single precision for cos(pi/2)/x, x = 1e-9: \t\t" << fun_single1(x_single) << "\n";
    cout << setprecision(16);
    cout << "Double precision for cos(pi/2)/x, x = 1e-9: \t\t" << fun_double1(x_double) << "\n";
    
    cout << "\n\n************** Part 2 *****************\n";
    cout << "Both the functions below are equal analytically.\n";
    cout << "With x = 1e-4, it should approximate 5.0000000041633333361e-5\n\n";
    x_single = 1e-4;
    x_double = 1e-4;
    cout << setprecision(8);
    cout << "Single precision for (1-cos(x)/sin(x), x = 1e-4: \t" << fun_single2(x_single) << "\n";
    cout << setprecision(16);
    cout << "Double precision for (1-cos(x)/sin(x) x = 1e-4: \t" << fun_double2(x_double) << "\n\n";
    cout << setprecision(8);
    cout << "Single precision for sin(x)/(1+cos(x)), x = 1e-4: \t" << fun_single3(x_single) << "\n";
    cout << setprecision(16);
    cout << "Double precision for sin(x)/(1+cos(x)), x = 1e-4: \t" << fun_double3(x_double) << "\n\n";

    cout << "Notes for fortran users: Make a workingPrecision (WP) variable and always specify floating numbers with _WP.\n";
    cout << "Trigonometric functions have both single and double precision versions given by e.g. SIN or DSIN.\n";
    cout << "I learned C++ before learning about floating number arithmetics, so I don't know syntax for c++\n";
    cout << "Bottom line, you should have control over the precision of your floating point numbers and avoid mixing them.\n";
    cout << "This will be explained in a lecture at some point during the course.\n";
    
    
    return 0;
}
