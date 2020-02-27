/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.cpp
 * Author: migue
 * 
 * Created on 27 de febrero de 2020, 12:24
 */

#include "Circle.h"


Circle::Circle(int a) {
     area(a);
     //area=a;
}

Circle::getArea() {
    const double PI = 3.141592653589793238463;
    return area * area*PI;
}

