#include "vector2D.cpp"
#include <math.h>

double Vector2D::length(){
    double length;
    length = sqrt(x * x + y * y);
    return length;
}