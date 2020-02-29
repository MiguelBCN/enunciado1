
/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 28 de febrero de 2020, 22:28
 */

//USAR OVERLOADING? PARA LAS DOS FORMAS
#include<iostream>
#include <vector>
#include "Circle.h"
#include "Ellipse.h"

using namespace std;
int opcion;
int contador = 0;
int area;
int numCirculos=0;
int numElipses=0;
vector<string> arr_opcion = {"Salir", "Introducir circulo"};

void agregarFigura(int &contador) {
    contador++;
    cout << "Circulo numero " << contador << "\n";

    cout << "Radi?\n";
    cin>>area;

    //Creamos el objeto 
    Circle circulo(area);

    cout << "El area del circulo es " << circulo.getArea() << "\n";
}

int main() {

    do {
        cout << "Hola " << " que quieres hacer?\n";
        for (int i = 0; i < arr_opcion.size(); i++) {
            cout << i + 1 << ". " << arr_opcion[i] << "\n";
        }

        cin>> opcion;

        switch (opcion) {
            case 1:
                opcion = 0;
                break;
            case 2:
                agregarFigura(contador);
                break;

        }

    } while (opcion != 0);
    cout << "***FIN***\n";

    return 0;


}
