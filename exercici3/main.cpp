
/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 26 de febrero de 2020, 22:28
 */


#include<iostream>
#include <vector>
#include "Circle.h"


using namespace std;
int opcion;
int contador = 0;
int area;
vector<string> arr_opcion = {"Salir", "Introducir circulo"};

void introducirCirculo(int &contador) {
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
                introducirCirculo(contador);
                break;

        }

    } while (opcion != 0);
    cout << "***FIN***\n";

    return 0;


}
