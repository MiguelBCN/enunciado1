
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
int main() {

    int opcion = 2;
    int radio;
    vector<string> arr_opcion;
    arr_opcion.push_back("Sortir");
    arr_opcion.push_back("Introducir circulo");


    do{
    cout<< "Hola que quieres hacer?\n";
    for (int i = 0; i < 7; i++) {
            cout << i << ". " << arr_opcion[i] << "\n";
        }
    
    cin>>opcion;
    cout<<opcion;
    }while(opcion!=0);
    
    cout << "***FIN***\n";
    

    return 0;
}
