/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 26 de febrero de 2020, 22:28
 */

#include <cstdlib>
#include<iostream>
#include <vector>

#include "Circle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int opcion = 2;
    int area;
    vector<string> arr_opcion = {"Salir", "Introducir circulo"};
    arr_opcion.size();





    do {
        cout << "Hola "  << " que quieres hacer?\n";
        for (int i = 0; i < 7; i++) {
            ::cout << i << ". " << arr_opcion[i] << "\n";
        }

        ::cin>> opcion;
        opcion--;

        switch (opcion) {
            case 1:
                cout<<"Radi?\n";
                cin>>area;
                Circle circulo=new Circle(area);
                cout<<"El area del circulo es "<<circulo.getArea()<<"\n";
                ::cout << "\n";
                break;
            default:
                cout<<"Opcion no valida\n";
                break;
        }


    } while (opcion != 0);
    cout << "***FIN***\n";

    return 0;
}
