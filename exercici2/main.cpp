

/* 
 * File:   main.cpp
 * Author: Miguel Huyllas
 *
 * Created on 26 de febrero de 2020, 22:28
 */

#include <cstdlib>
#include<iostream>
#include <vector>

using namespace std;

/*
 * 
 */
int main() {
    string nombre;
    int opcion = 2;
    vector<string> arr_opcion = {"Salir", "Bienvenido", "Redifinar el nombre"};
    //arr_opcion.size();

    cout << "Hola como te llamas? \n";
    cin>> nombre;


 do {
        cout << "Hola " << nombre << " que quieres hacer?\n";
        for (int i = 0; i < 7; i++) {
            ::cout << i << ". " << arr_opcion[i] << "\n";
        }

        ::cin>> opcion;
        opcion--;

        switch (opcion) {
            case 1:
                ::cout << "Bienvenido al curso de Estructura de Datos" << nombre << "\n";
                break;
            case 2:
                ::cout << "Corrige tu nombre\n";
                cin>>nombre;
                break;
        }


    } while (opcion != 0);

   
    return 0;
}