/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Miguel Huayllas
 *
 * Created on 26 de febrero de 2020, 22:28
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     ::string nombre;
    int opcion=2;
    ::string arr_opcion[]={"Salir","Bienvenido"};
    
    ::cout<< "Hola como te llamas? \n";
    ::cin>> nombre;
    
   
    
    do{
         cout<<"Hola "<<nombre<<" que quieres hacer?\n";
         for(int i=0;i<sizeof(arr_opcion);i++){
             ::cout<<i<<". "<<arr_opcion[i]<<"\n";
         }
         
         ::cin>> opcion;
         opcion--;
         if(opcion==1)
             ::cout<<"Bienvenido al curso de Estructura de Datos"<<nombre<<"\n";
         
        
    }while(opcion!=0);

    return 0;
}

