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

Ellipse::Ellipse(int a, int b) {
    radi1=a;
    radi2=b;
    
}
double Ellipse::getArea(){
return radi1*radi2;
}



