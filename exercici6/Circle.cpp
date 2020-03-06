

/* 
 * File:   Circle.cpp
 * Author: MiguelDesktop
 * 
 * Created on 5 de marzo de 2020, 17:29
 */

#include "Circle.h"
#include"Ellipse.h"
#include <iostream>
using namespace std;

Circle::Circle(float a,float b) {
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
    cout<<"Soy el contructor de circulo\n";

}
Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
}

