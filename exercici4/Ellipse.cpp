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
    radi1 = a;
    radi2 = b;

}

double Ellipse::getArea() {
    const double PI = 3.1415926535897932;
    return radi1 * radi2*PI;
}

void Ellipse::getRadi() {
    cout << radi1 << " " << radi2;
}



