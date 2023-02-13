/* Makefile tutorial TFY4235
 * C++ example
 * Written January 2023
 * Author: Jonas Frafjord
 */

#include <cmath>
#include "WPmod.cpp"
#include "functionmod.h"

using namespace std;

float fun_single1(float x){
    return cos(float(pi)/2)/x;
}
float fun_single2(float x){
    return (1-cos(x))/sin(x);
}
float fun_single3(float x){
    return sin(x)/(1+cos(x));
}

double fun_double1(double x){
    return cos(pi/2)/x;
}
double fun_double2(double x){
    return (1-cos(x))/sin(x);
}
double fun_double3(double x){
    return sin(x)/(1+cos(x));
}
