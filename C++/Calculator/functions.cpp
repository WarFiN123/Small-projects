#include <iostream>
#include <cmath>
#include <string>
#include "functions.h"
#define M_PI 3.14159265358979323846

long double hypotenuse_cal(long double a, long double b)
{
    return sqrt(a * a + b * b);
}

long double leg_cal(long double num1, long double num2)
{
    return sqrt(num1 * num1 - num2 * num2);
}
