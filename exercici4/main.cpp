
/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 28 de febrero de 2020, 22:28
 */


#include<iostream>
#include <vector>
#include "Circle.h"
#include "Ellipse.h"

using namespace std;


int main() {

    int opcion;
    int area;
    vector<string> arr_opcion = {"Salir", "Introducir circulo"};



    do {
        cout << "Hola "  << " que quieres hacer?\n";
        for (int i = 0; i < arr_opcion.size(); i++) {
            cout << i+1 << ". " << arr_opcion[i] << "\n";
        }

        cin>> opcion;
        

        switch (opcion) {
            case 1:
                opcion=0;
            case 2:
                
                cout<<"Radi?\n";
                cin>>area;
                
                //Creamos el objeto 
                Circle circulo(area);
                
                cout<<"El area del circulo es "<<circulo.getArea()<<"\n";
                break;
       
        }

    } while (opcion != 0);
    cout << "***FIN***\n";

    return 0;
}
