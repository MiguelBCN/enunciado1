
/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 26 de febrero de 2020, 22:28
 */
//Tambien debo controlar cuando el usaurio meta una letra?

#include<iostream>
#include <vector>
#include <stdexcept>
#include "Circle.h"


using namespace std;
int opcion;
int contador = 0;
int area;
vector<string> arr_opcion = {"Salir", "Introducir circulo"};

void introducirCirculo(int &contador) {
    //Tratamos de añadir primero el circulo
    contador++;
    cout << "Circulo numero " << contador << "\n";
    //Pedimos el radio y lo comprobamos
    cout << "Radi?\n";
    cin>>area;

    try {
        //Tratamos de crear el objeto
        Circle circulo(area);
        cout<<"El area es: "<<circulo.getArea()<<"\n";
        cout<<"Circulo numero"<<contador<<"\n";
    } catch (const std::invalid_argument& e) {
        // codi de gestió de l’excepció, en aquest exercici: missatge per consola
        contador--;
        cout << "Valor recibido no puede ser negativo ni 0\n";
    }

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
