
/* 
 * File:   Circle.cpp
 * Author: migue
 * 
 * Created on 27 de febrero de 2020, 12:24
 */

#include "Circle.h"


Circle::Circle(int a) {
     //area(a);
     area=a;
}

double Circle::getArea() {
    const double PI = 3.141592653589793238463;
    return double(area * area*PI);
}

