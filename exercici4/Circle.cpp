
/* 
 * File:   Circle.cpp
 * Author: migue
 * 
 * Created on 27 de febrero de 2020, 12:24
 */

#include "Circle.h"


Circle::Circle(float a) {
     //area(a);
     area=a;
}

double Circle::getArea() {
    const double PI = 3.1415926535897932;
    return double(area * area*PI);
}

