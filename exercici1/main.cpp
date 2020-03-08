

/* 
 * File:   main.cpp
 * Author: Miguel Huayllas
 *
 */

#include <cstdlib>
#include<iostream>

using namespace std;

int main(int argc, char** argv) {
    string nombre;
    int opcion = 2;
    string arr_opcion[] = {"Salir", "Bienvenido"};

    cout << "Hola como te llamas? \n";
    cin>> nombre;



    do {
        cout << "Hola " << nombre << " que quieres hacer?\n";

        //for (int i = 0; i < sizeof (arr_opcion); i++) {
        for (int i = 0; i < 2; i++) {
            ::cout << i + 1 << ". " << arr_opcion[i] << "\n";
        }

        cin>> opcion;
        opcion--;
        if (opcion == 1)
            ::cout << "Bienvenido al curso de Estructura de Datos" << nombre << "\n";


    } while (opcion != 0);
    cout << "***FIN***\n";
    return 0;
}

