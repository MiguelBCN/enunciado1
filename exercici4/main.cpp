
/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 28 de febrero de 2020, 22:28
 */
//Cin >> varr1>>var2>>var3

//USAR OVERLOADING? PARA LAS DOS FORMAS
#include<iostream>
#include <vector>
#include "Circle.h"
#include "Ellipse.h"
#include <stdio.h> 
#include <stdlib.h>

using namespace std;
int opcion;
int area;
int numCirculos = 0;
int numElipses = 0;
string datosEntrada;
vector<string> arr_opcion = {"Salir", "Agregar figura", "Glosario de formas"};

void agregarFigura(string datos, int &numCirculos, int &numElipses) {

    //Con los datos recibidos comprobamos que sea vaidos y guardarlos en unas variables para luego ahcer una llamda al constructor adecuado
    char forma;
    float radi1;
    float radi2;
    //Comprobar la  veracidad de los datos
    try {
        //Comprobamos la lonmgitud
        if (datos.size() > 2 && datos.size() < 6) {
            //Comprobamos los caracteres y los extraemos en una variables temporales
            if (datos.size() == 3) {
                forma = datos[0];
                radi1 = strtof(datos[2]);
            } else if (datos.size() == 5) {
                forma = datos[0];
                radi1 = strtof(datos[2]);
                radi2 = strtof(datos[4]);

            } else {
                cout << "Los datos introducidos no son validos\n";
                }


        } else {
            cout << "El tamaño de los datos introducidos es incorrecto\n";
        }
    }

    //Comprobamos que los radios sean mayores a 0
    //Añadir el contador de la forma, crear y mostrar el objeto

}

int main() {
    int y = 9;
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
                cout << "Entra les dades de la teva figura ( tipus[C o E] data1 data2[buit si el tipus es C] )\n";
                cin >> datosEntrada;
                agregarFigura(datosEntrada, numCirculos, numElipses);
                break;
            case 3:
                //mosntrar contadores 
                cout << "Numero de Circulos " << numCirculos << " , Numero de elipses " << numElipses << " \n";
                break;

        }

    } while (opcion != 0);
    cout << "***FIN***\n";


    return 0;


}

