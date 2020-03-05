
/* 
 * File:   Circle.cpp
 * Author: migue
 * 
 * Created on 27 de febrero de 2020, 12:24
 */

#include "Circle.h"
#include<iostream>
using namespace std;


Circle::Circle(float a) {
    if (a > 0) {
        radio = a;
    } else {
        cout << "El radio no puede ser negativo o 0\n";
        throw a;
    }

}

double Circle::getArea() {
    const double PI = 3.141592653589793238463;
    return double(radio * radio * PI);
}
