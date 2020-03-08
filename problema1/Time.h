/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: migue
 *
 * Created on 3 de marzo de 2020, 12:14
 */

#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time(int h = 0, int m = 0, int s = 0);
    //Time(const Time& orig);
    //virtual ~Time();
    int getHour() const;
    int getMinute() const;
    int getSeccond() const;
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void print() const;
private:
    int hora;   //0-23
    int min;    //0-59
    int seg;    //0-59

};

#endif /* TIME_H */

