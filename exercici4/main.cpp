/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 * Created on 28 de febrero de 2020, 22:28
 */
//Cin >> varr1>>var2>>var3

#include<iostream>
#include <vector>
#include <stdexcept>
#include"Circle.h"
#include"Ellipse.h"

using namespace std;
int opcion;
int numCirculos = 0;
int numElipses = 0;
vector<string> arr_opcion = {"Salir", "Agregar figura", "Glosario de formas"};

void agregarFigura(int &numCirculos, int &numElipses) {
    string forma;
    float radio1;
    float radio2;

    //Pedimos al usuario los datos
    cout << "Entra les dades de la teva figura ( tipus[C o E] data1 data2[buit si el tipus es C] ) \n";

    if (cin.get() =='C') {
        cout << "Entraste en circulo\n";
        cin >> forma >> radio1;
        
    }
    else if(cin.get()=='E')
        cin >> forma >> radio1>>radio2;
    //cout<<forma<<" "<<radio1<<" "<<radio2<<"\n";

    //Ahora con los parametros iniciados hacemos un if dependiendo de la forma
    try {
        if (forma == "e" || forma == "E") {
            //Tratamos de crear el elipe
            try {
                //Tratamos de crear el objeto
                Ellipse elipse(radio1, radio2);
                cout << "El area es: " << elipse.getArea() << "\n";
                numElipses++;
            } catch (float radio) {
                // codi de gestió de l’excepció, en aquest exercici: missatge per consola
                cout << "EL valor del radio de la elipse" << radio << "no puede ser negativo ni 0\n";
            }

        } else if (forma == "c" || forma == "C") {
            //Tratamos de crear el circulo
            try {
                //Tratamos de crear el objeto
                Circle circulo(radio1);
                cout << "El area es: " << circulo.getArea() << "\n";
                numCirculos++;

            } catch (float radio) {
                // codi de gestió de l’excepció, en aquest exercici: missatge per consola
                cout << "EL valor del radio del circulo " << radio << "no puede ser negativo ni 0\n";
            }

        } else
            throw forma;
    } catch (char forma) {
        cout << "Forma introducida " << forma << " no valida\n";
    }
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
                agregarFigura(numCirculos, numElipses);
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

