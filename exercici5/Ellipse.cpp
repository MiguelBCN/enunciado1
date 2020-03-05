/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ellipse.cpp
 * Author: MiguelDesktop
 * 
 * Created on 29 de febrero de 2020, 16:05
 */

#include "Ellipse.h"
#include<iostream>
using namespace std;

Ellipse::Ellipse(float a, float b) {
    if (a > 0)
        radio1 = a;
    else {
        throw a;
    }
    if (b > 0)
        radio2 = a; 
    else {
        throw b;
    }

}

double Ellipse::getArea() {
    const double PI = 3.1415926535897932;
    return radio1 * radio2*PI;
}




