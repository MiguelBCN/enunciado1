/* 
 * File:   main.cpp
 * Author: MiguelDesktop
 *
 */

#include<iostream>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include"Circle.h"
#include"Ellipse.h"

using namespace std;

//Principales variables
int opcion;
int numCirculos = 0;
int numElipses = 0;
vector<string> arr_opcion = {"Salir", "Agregar figura", "Glosario de formas", "Leer de un fichero"};

//Metodos Implementados
void agregarFigura(int &numCirculos, int &numElipses);
void leerFichero(int &numCirculos, int &numElipses);

//Programa principal

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
                agregarFigura(numCirculos, numElipses);
                break;
            case 3:
                //mosntrar contadores 
                cout << "Numero de Circulos " << numCirculos << " , Numero de elipses " << numElipses << " \n";
                break;
            case 4:
                //Leer datos de un ficheroç
                leerFichero(numCirculos, numElipses);
                break;

        }

    } while (opcion != 0);
    cout << "***FIN***\n";


    return 0;

}

void agregarFigura(int &numCirculos, int &numElipses) {
    //Parametros que pasar cuando llamemos a los constructores
    string forma;
    float radio1;
    float radio2;

    //Declaro al principio la elipse
    Ellipse* fig;

    //Pedimos al usuario los datos
    cout << "Entra les dades de la teva figura ( tipus[C o E] data1 data2[buit si el tipus es C] ) \n";
    cin>>forma;
    if (forma == "e" || forma == "E") {
        cin >> radio1>>radio2;
    } else if (forma == "c" || forma == "C") {
        cin>>radio1;
    } else
        cout << "El formato no es corecta";


    //Inicializamos el contructor dependiendo del tipo de forma que se introdujo
    try {
        if (forma == "e" || forma == "E") {
            //Tratamos de crear el elipe
            try {
                //Tratamos de crear el objeto
                fig = new Ellipse(radio1, radio2);
                cout << "El area de la elipse es: " << fig->getArea() << "\n";
                numElipses++;
                delete fig;

            } catch (float radio) {
                // codi de gestió de l’excepció, en aquest exercici: missatge per consola
                cout << "EL valor del radio de la elipse" << radio << " no puede ser negativo ni 0\n";
            }

        } else if (forma == "c" || forma == "C") {
            //Tratamos de crear el circulo
            try {
                //Tratamos de crear el objeto
                fig = new Circle(radio1, radio1);
                cout << "El area del circulo es: " << fig->getArea() << "\n";
                numCirculos++;
                delete fig;

            } catch (float radio) {
                // codi de gestió de l’excepció, en aquest exercici: missatge per consola
                cout << "EL valor del radio del circulo " << radio << " no puede ser negativo ni 0\n";
            }

        } else
            throw forma;
    } catch (char forma) {
        cout << "Forma introducida " << forma << " no valida\n";
    }
}

void leerFichero(int &numCirculos, int &numElipses) {

    //Principales variables en este metodo
    char forma, op;
    float radio1, radio2;
    ifstream myFile;
    Ellipse* fig;

    string rutaFichero = "ex.txt"; //Ruta por defecto
    string inputFile; //Variable que guarda el contenido del fichero linea a linea

    //Obtener ruta del fichero y crear ifstream
    cout << "Desea intorducir una nueva ruta de donde leer el fichero Y/N (Encaso de no se usara el por defecto)\n";
    cin>>op;
    try {
        if (op == 'Y' || op == 'y') {
            cout << "Introduzca la nueva ruta de donde desea cargar lso datos\n";
            cin>>rutaFichero;
            myFile.open(rutaFichero.c_str());
        } else if (op == 'N' || op == 'n') {
            myFile.open(rutaFichero.c_str());
        } else {
            cout << "La opcion no es valida\n";
            throw op;
        }

    } catch (char op) {
        cout << "Su input " << op << " es invalido\n";
        cout << "Usando ruta por defecto..\n";
        myFile.open(rutaFichero.c_str());
    }

    //Leyendo el fichero
    while (!myFile.eof()) {
        myFile >> inputFile;

        if (inputFile == "e" || inputFile == "E") {

            myFile >> inputFile;
            radio1 = strtof((inputFile).c_str(), 0);
            myFile >> inputFile;
            radio2 = strtof((inputFile).c_str(), 0);

            //Creo la elipse
            fig = new Ellipse(radio1, radio2);
            cout << "El area de la elipse es: " << fig->getArea() << "\n";
            numElipses++;
            delete fig;

        } else if (inputFile == "C" || inputFile == "c") {

            myFile >> inputFile;
            radio1 = strtof((inputFile).c_str(), 0);

            //Creo el circulo
            fig = new Circle(radio1, radio1);
            cout << "El area del circulo es: " << fig->getArea() << "\n";
            numCirculos++;
            delete fig;

        } else
            cout << "El formato de la linea no es correcto " << inputFile << "\n";
    }

    myFile.close();

}


