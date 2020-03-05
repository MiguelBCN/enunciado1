

/* 
 * File:   Ellipse.cpp
 * Author: MiguelDesktop
 * 
 * Created on 5 de marzo de 2020, 17:29
 */

#include "Ellipse.h"
#include <iostream>
using namespace std;

Ellipse::Ellipse(float a, float b) {
    if (a > 0)
        this->radio1 = a;
    else {
        throw a;
    }
    if (b > 0)
        this->radio2 = a;
    else {
        throw b;
    }
    cout<<"Soy el contructor de elipse\n";

}

Ellipse::Ellipse(const Ellipse& orig) {
}

Ellipse::~Ellipse() {
}

double Ellipse::getArea() {
    const double PI = 3.1415926535897932;
    return radio1 * radio2*PI;
}

