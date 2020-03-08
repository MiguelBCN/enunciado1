/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.cpp
 * Author: migue
 * 
 * Created on 3 de marzo de 2020, 12:14
 */
#include <stdexcept>
#include <iostream>
#include "Time.h"

Time::Time(int h = 0, int m = 0, int s = 0) {
    this->setHour(h);
    this->setMinute(m);
    this->setSecond(s);

}

int Time::getHour() const {
    return hora;
}

int Time::getMinute() const {
    return min;
}

int Time::getSeccond() const {
    return seg;
}

void Time::setHour(int h) {
    if (h >= 0 && h <= 23)
        hora = h;
    else
        throw invalid_argument("Invalida hora");
}

void Time::setMinute(int m) {
    if (m >= 0 && m <= 59)
        min = m;
    else
        throw invalid_argument("Invalida minuto");
}

void Time::setSecond(int s) {
    if (s >= 0 && s <= 59)
        seg = s;
    else
        throw invalid_argument("Invalida segundo");
}
void Time::print() const{
std::cout<< hora<<min<<seg;}


/*Time::Time(const Time& orig) {
}

Time::~Time() {
}*/

