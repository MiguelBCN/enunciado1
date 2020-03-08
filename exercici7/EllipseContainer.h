/* 
 * File:   EllipseContainer.h
 * Author: MiguelDesktop
 *
 */

#ifndef ELLIPSECONTAINER_H
#define ELLIPSECONTAINER_H
#include<vector>
#include"Ellipse.h"

class EllipseContainer {
public:
    EllipseContainer();
    EllipseContainer(const EllipseContainer& orig);
    virtual ~EllipseContainer();
    void addEllipse(Ellipse*);
    float getAreas();
private:
    std::vector<Ellipse*> v;
    

};

#endif /* ELLIPSECONTAINER_H */

