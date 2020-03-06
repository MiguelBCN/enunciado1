
/* 
 * File:   Circle.h
 * Author: MiguelDesktop
 *
 * Created on 5 de marzo de 2020, 17:29
 */
#include "Ellipse.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle:public Ellipse {
public:
    Circle(float a ,float b);
    Circle(const Circle& orig);
    virtual ~Circle();
    //Este metodo sera heradado de elipse
    //double getArea();
    

};

#endif /* CIRCLE_H */

