
/* 
 * File:   EllipseContainer.cpp
 * Author: MiguelDesktop
 * 
 */

#include "EllipseContainer.h"
#include<vector>
#include"Ellipse.h"
#include<iostream>
#include"Circle.h"

std::vector<Ellipse*> vtemp(10);

EllipseContainer::EllipseContainer() {
    this->v = vtemp;


}

EllipseContainer::EllipseContainer(const EllipseContainer& orig) {
}

EllipseContainer::~EllipseContainer() {
    //Como tengo circulos y elipses en el vector determino de que tipo son son y llamo al destructor adecuado
    for (int x = 0; x< this->v.size(); x++) {
        if (dynamic_cast<Circle*> (this->v[x]))
            delete (Circle *) (this->v[x]);
        else
            delete (Ellipse *) (this->v[x]);
    }
    std::cout << "\n";

}

void EllipseContainer::addEllipse(Ellipse* eli) {

    if (this->v.size() > 10)
        std::cout << "Vector lleno no puede agregar mas\n";
    else {
        this->v.push_back(eli);
        std::cout << "Agregado correctamente\n";
    }

}

float EllipseContainer::getAreas() {
    float totalAreas = 0;
    std::vector<Ellipse*>::iterator elipse;
    //Un bucle que itere todas los elementos del array
    Ellipse* temp;
    for (elipse = this->v.begin(); elipse != this->v.end(); ++elipse) {
        temp = *elipse;
        totalAreas = totalAreas + temp->getArea();
    }

    return totalAreas;

}