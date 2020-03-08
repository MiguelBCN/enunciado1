

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

Circle::Circle(float a, float b):Ellipse(a,b) {
    cout << "Soy el contructor de circulo\n";

}

double Circle::getArea() {
    return 3.14 * radio1*radio2;
}

Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
    cout<<"Soy el destructor de circulo\n";
}

