
/* 
 * File:   Ellipse.h
 * Author: MiguelDesktop
 *
 * Created on 5 de marzo de 2020, 17:29
 */

#ifndef ELLIPSE_H
#define ELLIPSE_H

class Ellipse {
protected:
    float radio1;
    float radio2;
public:
    Ellipse(float a=0 ,float b=0);
    Ellipse(const Ellipse& orig);
    virtual double getArea();
    virtual ~Ellipse();
};

#endif /* ELLIPSE_H */

