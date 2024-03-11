#include "Circle.h"
#include "Shape.h"
#include <cmath>

Circle::Circle(double width): Shape(width){
}

Circle::~Circle() = default;

double Circle::Area(){
    return 3.141 * pow((width / 2), 2);
}