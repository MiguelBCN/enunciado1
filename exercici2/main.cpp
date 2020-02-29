
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

int main() {
    string nombre;
    int opcion = 2;
    vector<string> arr_opcion;

    arr_opcion.push_back("Salir");
    arr_opcion.push_back("Bienvenido");
    arr_opcion.push_back("Redifinar el nombre");

    cout << "Hola como te llamas? \n";
    cin>> nombre;



    do {
        cout << "Hola " << nombre << " que quieres hacer?\n";

        for (int i = 0; i < arr_opcion.size(); i++) {
            cout << i + 1 << ". " << arr_opcion[i] << "\n";
        }

        cin>> opcion;

        switch (opcion) {
            case 1:
                opcion = 0;
                break ;
            case 2:
                cout << "Bienvenido al curso de Estructura de Datos" << nombre << "\n\n";
                break;
            case 3:
                cout << "Corrige tu nombre\n";
                cin>>nombre;
                break;
        }


    } while (opcion != 0);
    cout << "***FIN***\n";
    return 0;
}